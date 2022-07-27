#include<iostream>
using namespace std;

main() {
    /*
    char s[20] = "Hello World";

    cout << s << endl;

    cin >> s;

    cout << s << endl;
    scanf(" ",s);
    cin.getline(s, 20);
    // scanf(" %[^\n]",s);
    cout << s << endl;
    */

   string s;

   cout << "Enter a string" << endl;

   cin >> s;

    cout << s << endl;
    scanf(" ",s); //Solution
   getline(cin ,s);

   cout << s << endl;

   cout <<sizeof(s) << endl;

}