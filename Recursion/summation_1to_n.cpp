#include<iostream>
using namespace std;

int SumToN(int);

int main() {
    int num, result;
    cout << "Enter your num" << endl;\
    cin >> num;
    result = SumToN(num);
    cout << "Output " << result << endl;
} 

int SumToN(int num) {
    if(num==0) 
        return 0;
    else 
        return num + SumToN(num-1);
}