#include<iostream>
using namespace std;

void display(int num);
void reverse_display(int num);

int main() {
    int num,result;
    cout << "Enter your number" << endl;
    cin >> num;
    
    display(num);
    cout << endl;
    reverse_display(num);
    cout << endl;

}

void display(int num) {
    if(num==0) {
        return;
    }
    display(num-1);
    cout << num << " ";
}

void reverse_display(int num) {
    if(num==0) {
        return;
    }
    cout << num << " ";
    reverse_display(num-1);
}