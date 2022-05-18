#include<iostream>
using namespace std;

void prime_factors(int num);

int main() {
    int num;
    cout << "Enter the number which you wanna find out prime factors..\t";
    cin >> num;
    prime_factors(num);
    cout << endl;
}

void prime_factors(int num) {
    if(num==1) {
        return;
    }
    int i=2;
    while(num%i!=0)
        i++;
    cout << i << " ";
    prime_factors(num/i);
    
}