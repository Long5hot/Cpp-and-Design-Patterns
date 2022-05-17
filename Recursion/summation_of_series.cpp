#include<iostream>
using namespace std;

int series(int num);


int main() {
    int num, result;
    cout << "Enter your num" << endl;\
    cin >> num;
    result = series(num);
    cout << " = " << result << endl;
} 

int series(int num) {
    int sum;
    if(num==1) {
        cout << "1";
        return 1;
    }
    sum = num + series(num-1);
    cout << " + " << num;
    return sum;
}