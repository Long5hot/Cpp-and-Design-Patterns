#include<iostream>
using namespace std;

int div_9(long int);

int main() {
    int num;

    cout << "Enter your number:\t";
    cin >> num;
    int result = div_9(num);
    if(result)
        cout << "Divisible by 9" << endl;
    else 
        cout << "Not divisible by 9" << endl;

}

int div_9(long int num) {
    if(num==9){
        return 1;
    }
    if(num<9){
        return 0;
    }
    int sum=0;
    while(num>0) {
        sum+=num%10;
        num/=10;
    }
    return div_9(sum);

}