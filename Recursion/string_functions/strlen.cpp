#include<iostream>
using namespace std;

int my_strlen(char *);

int main() {

    char str[100];

    cout << "Enter your string\t";
    cin.getline(str,100);

    int len = my_strlen(str);
    cout << len << endl;
}

int my_strlen(char * string) {
    if(*(string)=='\0') {
        return 0;
    }
    return 1+my_strlen(string+1);
}