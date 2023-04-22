import requests
import os
from bs4 import BeautifulSoup
from urllib.parse import urljoin

def get_image_urls(url):
    page = requests.get(url)
    soup = BeautifulSoup(page.content, 'html.parser')
    img_tags = soup.find_all('img')
    urls = [img['src'] for img in img_tags]
    return urls

def download_images(url):
    image_urls = get_image_urls(url)
    for image_url in image_urls:
        try:
            image_url = urljoin(url, image_url)
            response = requests.get(image_url, stream=True)
            file_name = os.path.basename(image_url)
            with open(file_name, 'wb') as f:
                for chunk in response.iter_content(1024):
                    f.write(chunk)
        except:
            print(f"Error downloading {image_url}")
    
def crawl_and_download(url):
    visited = set()
    to_visit = [url]
    while to_visit:
        url = to_visit.pop()
        if url in visited:
            continue
        visited.add(url)
        download_images(url)
        page = requests.get(url)
        soup = BeautifulSoup(page.content, 'html.parser')
        link_tags = soup.find_all('a')
        for link in link_tags:
            link_url = link.get('href')
            if link_url and link_url.startswith('http') and link_url not in visited:
                to_visit.append(link_url)

