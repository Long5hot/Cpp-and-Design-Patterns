// SWap using function overloading

#include<iostream>
using namespace std;

void swap(int & m, int & n) {
    n = m + n -(m=n);
}

void swap(float & m, float & n) {
    n = m + n -(m=n);
}

void swap(char & m, char & n) {
    n = m + n -(m=n);
}

int main() {
    int a =10, b=20;
    float c = 23.5, d =7.9;
    char m = 'a', n = 'b';
    swap(a,b);
    swap(c,d);
    swap(m,n);
    cout << "A = " << a << " B = " << b << endl;
    cout << "C = " << c << " D = " << d << endl;
    cout << "M = " << m << " N = " << n << endl;


}

