#include<iostream>
using namespace std;

main() {
    wchar_t ch = 'A';

    wcout << "Size of char: " << sizeof(ch) << endl;

    wcin >> ch;

    wcout << "value of ch: " << ch << endl;

    wchar_t ch2 = L'A';

    wcout << "value of ch2: " << ch2 << endl;

    wcout << "Size of char: " << sizeof(ch2) << endl;
}