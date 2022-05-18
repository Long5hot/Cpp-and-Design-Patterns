#include<iostream>
using namespace std;

int div_11(long int);

int main() {
    int num;

    cout << "Enter your number:\t";
    cin >> num;
    int result = div_11(num);
    if(result)
        cout << "Divisible by 11" << endl;
    else 
        cout << "Not divisible by 11" << endl;

}

int div_11(long int num){
    if(num==1)
        return 1;
    if(num<11)
        return 0;
    int even=0,odd=0;

    while(num>0){
        even += num%10;
        num/=10;
        odd +=num%10;
        num/=10;
    }
    if(!(even-odd))
        return 1;

    int diff = even >odd ? even-odd : odd -even;

    return div_11(diff);
}