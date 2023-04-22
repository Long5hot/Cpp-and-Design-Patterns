#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <regex>
#include <curl/curl.h>

using namespace std;

// Utility function to download an image from a URL
size_t downloadImage(string url, string filename) {
    CURL* curl;
    FILE* fp;
    CURLcode res;
    long code;
    size_t img_size;

    curl = curl_easy_init();

    if (curl) {
        fp = fopen(filename.c_str(), "wb");
        curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, fp);
        curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);
        res = curl_easy_perform(curl);
        curl_easy_getinfo(curl, CURLINFO_RESPONSE_CODE, &code);
        curl_easy_cleanup(curl);
        fclose(fp);

        if (code == 200) {
            ifstream file(filename, ios::binary | ios::ate);
            img_size = file.tellg();
            file.close();
            return img_size;
        }
    }

    return 0;
}

// Recursive function to scrape images from a URL and all its sub-links
void scrapeImages(string url, vector<string>& visited) {
    CURL* curl;
    CURLcode res;
    string html, link;
    regex img_regex("<img .*?src=['\"](.*?)['\"].*?>");
    smatch img_match;

    curl = curl_easy_init();

    if (curl) {
        curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
        curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, [](char* ptr, size_t size, size_t nmemb, string* stream) {
            *stream += ptr;
            return size * nmemb;
        });
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &html);
        res = curl_easy_perform(curl);
        curl_easy_cleanup(curl);

        while (regex_search(html, img_match, img_regex)) {
            string img_url = img_match[1];
            if (img_url.substr(0, 4) != "http") {
                img_url = url + img_url;
            }
            string img_name = img_url.substr(img_url.find_last_of("/") + 1);
            if (visited.end() == find(visited.begin(), visited.end(), img_url)) {
                visited.push_back(img_url);
                cout << "Downloading: " << img_name << endl;
                downloadImage(img_url, img_name);
                if (img_name.substr(img_name.find_last_of(".") + 1) != "html") {
                    continue;
                }
                link = img_url;
                link = link.substr(0, link.find_last_of("/"));
                link = link.substr(0, link.find_last_of("/") + 1);
                scrapeImages(link, visited);
            }
            html = img_match.suffix().str();
        }
    }
}

int main(int argc, char* argv[]) {
    if (argc != 2) {
        cerr << "Usage: ./scraper <url>" << endl;
        return 1;
    }

    vector<string> visited;
    string url(argv[1]);

    scrapeImages(url, visited);

    return 0;
}

