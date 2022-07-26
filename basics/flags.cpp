#include<iostream>
#include<unistd.h>
using namespace std;

main(){
    int x;

    cout << showpos;

    cout << "Enter a number: ";

    cin >> x;

    cout << showbase;

    cout << uppercase;

    cout << "Hex Value " << hex << x << endl;

    cout << "Octal Value " << oct << x << endl;

    int y = 30;

    cout << dec;

    cout << "Decimal Value " << y << endl;

    cout << noshowpos << noshowbase << nouppercase;

    cout << "Hex Value " << hex << x << endl;

    cout << "Octal Value " << oct << x << endl;

    cout << dec;

    cout << "Decimal Value " << y << endl;
}