#include<iostream>
using namespace std;

class A
{
private:
    int x,y;
public:
    A() {} //Have to provide default becasue of para
    A(int ,int);
    void get_data() {
        cout << x << " " << y << endl;
    }

};
/*
A :: A(){
        cout << "Default Constructor" << endl;
        x=10, y =10;
    }
    */
A :: A(int a,int b){
        cout << "Parameterized Constructor" << endl;
        x=a, y =b;
    }


int main(int argc, char const *argv[])
{
    A obj,obj2,obj3(34,67);
    obj.get_data();
    obj2.get_data();
    obj3.get_data();

    return 0;
}
