// Swap two function without using pointer

#include<iostream>
using namespace std;

void swap(int & m, int & n) {
    n = m + n -(m=n);
}

int main() {
    int a =10, b=20;
    swap(a,b);
    cout << "A = " << a << " B = " << b << endl;
}

