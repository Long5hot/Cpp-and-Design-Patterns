#include<iostream>
using namespace std;

char * my_strchr (char *,char);

int main() {
    char str[100] = "This is my string";
    cout << str << endl;
    cout << "Enter the character you want to find out in above string" << endl;
    char ch;
    cin >> ch;
    char *p = my_strchr(str,ch);
    if(*p!=0) 
        cout << *p << " Yes its present" << endl;
    else 
        cout << "No its not present" << endl;
}

char * my_strchr(char * string,char ch) {
    static int i;
    if(*(string+i) == '\0') {
        return NULL;
    }
    if((*(string+i))==ch) {
        return string+i;
    }
    else {
        i++;
        return my_strchr(string,ch);
    }
}