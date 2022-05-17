#include<iostream>
using namespace std;

int summation(int);

int main() {
    int num,result;
    cout << "Enter the num\t" ;
    cin >> num;
    result = summation(num);
    cout << result << endl;;
}

int summation(int num){
    if(num/10==0) {
        cout << num <<" = ";
        return num;
    }
    cout << num%10 << " + ";
    return num%10 + summation(num/10);
}