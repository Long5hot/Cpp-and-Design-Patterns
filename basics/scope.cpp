#include<iostream>

using namespace std;

int x=100;

main() {

    int x=10;

    cout << "local "<< x << endl;

    cout << "global "<<::x << endl; // scope resolution operator

    {
        int x=20;
        cout << "local local  "<< x << endl;
    }
}