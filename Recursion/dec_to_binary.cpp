#include<iostream>
using namespace std;

void binary(int);

int main() {
    int num;
    cout << "Enter num\t" ;
    cin >> num;
    binary(num);
    cout << endl;
}

void binary(int num) {
    static int pos=31;
    if(pos>=0){
        cout << (num>>pos&1);
        if(pos%8==0)
            cout << " ";
        pos--;
        binary(num);
    }
    else pos=31;
}