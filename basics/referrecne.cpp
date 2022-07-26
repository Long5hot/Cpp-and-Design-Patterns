#include<iostream>
using namespace std;

main(){
    int x=10;

    int &rv = x;

    cout << "rv "<< rv << endl;

    cout << "x "<< x << endl;

    cout << (unsigned long long)&rv << endl; //reference to the address of x

    cout << (unsigned long long)&x << endl;
}