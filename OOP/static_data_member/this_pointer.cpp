#include<iostream>
using namespace std;

class A {
    int x,y;
    static int count;
    public:
    A() {
        count++;
        cout << "Constructor" << endl;
    }
    static void get_data() {
        //cout << x << " " << y << endl; //Static function doesnt have this pointer so not possible
        cout << count << endl;
    }
};
int A :: count =100;
int main() {
    A obj1;
    obj1.get_data();  
}