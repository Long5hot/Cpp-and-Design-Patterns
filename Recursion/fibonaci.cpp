#include<iostream>
using namespace std;

void fib(int num);
int book_Fibonacci(int);

int main() {
    int ele;
    cout << "Enter number of elements :\t";
    cin >> ele;
    fib(ele);
    int index; 
    cout << "Enter the index \t" ;
    cin >> index;
    cout << "result" << " = " << book_Fibonacci(index) << endl;  


}

void fib(int num) {
    if(num==0) {
        cout << endl;
        return;
    }
    static int i,j,sum;
    if(i==0) {
        i++;
        cout << i << " ";
    }
    else if(i==1 && j==0) {
        cout << i << " ";
        j++;
    }
    else {
           sum = i+j;
           cout << sum << " "; 
           j = i;
           i = sum;
    }
    fib(num-1);
}

int book_Fibonacci(int num) {
    //Gives a number at fibonaaci's num's index;
    if(num==0||num==1) {
        return 1;
    }
    return book_Fibonacci(num-1) + book_Fibonacci(num-2);
}



