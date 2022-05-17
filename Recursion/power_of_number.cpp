#include<iostream>
using namespace std;

float power(int ,int);

int main() {
    int num,times,result;
    cout << "Enter the number\t";
    cin >> num;
    cout << "Enter the power you want to find out\t";
    cin >> times;
    result = power(num,times);
    cout << num << " power " << times << " = " << result << endl;


}

float power(int num,int times) {
    if(times==0) {
        return 1;
    }
    return num * power(num,times-1);
}