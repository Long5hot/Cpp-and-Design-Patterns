#include<iostream>
using namespace std;

void convert(int,int);

int main() {
    int num,base;
    cout << "Enter num\t" ;
    cin >> num;
    cout << "Enter base\t";
    cin >> base;
    convert(num,base);
    cout << endl;
}

void convert(int num,int base) {
    if(num/base==0){
        cout << num%base;
        return;
    }
    convert(num/base,base);
    cout << num%base;
}