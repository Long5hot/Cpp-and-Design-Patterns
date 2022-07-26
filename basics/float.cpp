#include<iostream>
#include<unistd.h>
using namespace std;

main() {
    float f;
    cout << "Enter a number: " << endl;

    cin >> f;

    cout << "The value of f is " << f << endl;

    cout << "The value of f is " << fixed << f << endl;

    cout << "The value of f is " << scientific << f << endl;

    cout << "The value of f is " << showpoint << f << endl;

    // cout << "The value of f is " << setprecision(2) << f << endl;


}