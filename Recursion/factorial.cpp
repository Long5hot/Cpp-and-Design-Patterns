#include<iostream>
using namespace std;

long long int fact(long int);

int main() {
    int num,result;
    cout << "Enter your number" << endl;
    cin >> num;
    result = fact(num);

    cout << "Output\t" << result << endl;

}

long long int fact(long int num) {
    if(num==0)
        return 1;
    else 
        return num * fact(num-1);
}