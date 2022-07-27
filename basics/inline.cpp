#include<iostream>
using namespace std;

inline int sum(int a, int b) {
    return a + b;
}

main(){
    int a = 1, b = 2;
    cout << sum(a, b) << endl;
}