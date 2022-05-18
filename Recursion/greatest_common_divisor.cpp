#include<iostream>
using namespace std;

int GCD(int ,int);

int main() {

    int num_1,num_2;
    cout << "Enter num1 and num2\t";
    cin >> num_1 >> num_2;
    int result = GCD(num_1,num_2);
    cout << result<< endl;

}


//My_method
int GCD(int num_1,int num_2) {
    static int i;
    if(num_1>num_2) {
        if(((num_1 % (num_1-1-i))==0) && ((num_2 % (num_1-1-i))==0))
            return num_1 -1 -i;
        else {
            i++;
            return GCD(num_1,num_2);
        }
    }
    else {
        if(((num_1 % (num_2-1-i))==0) && ((num_2 % (num_2-1-i))==0))
            return num_2 -1 -i;
        else {
            i++;
            return GCD(num_1,num_2);
        }
    }


}


//B