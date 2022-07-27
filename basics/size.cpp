#include<iostream>

using namespace std;

main(){
    cout << "Size of char: " << sizeof('A') << endl;
    
    cout << "Size of char: " << sizeof(L'A') << endl;

    int * ptr ;
    char * ptr2 ;
    cout << "Size of int: " << sizeof(ptr) << endl;
    cout << "Size of int: " << sizeof(ptr) << endl;
    cout << "Size of char: " << sizeof(ptr2) << endl;
}