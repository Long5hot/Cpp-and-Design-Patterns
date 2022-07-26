#include<iostream>
using   namespace std;

main()
{
    char ch;
    cout << "Enter a character: ";

    cin >> ch;

    // cout << "The ASCII value of " << ch << " is " << ch << endl;
    cout << "The ASCII value of " << ch << " is " << int(ch) << endl;   
}