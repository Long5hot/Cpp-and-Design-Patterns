#include<iostream>
using namespace std;

class A
{
private:
    int x,y;
public:
    A() {} //Have to provide default becasue of para
//    A(int ,int = 100);
    A(int a,int b=100){
        cout << "Parameterized Constructor" << endl;
        x=a, y =b;
    }

    void get_data() {
        cout << x << " " << y << endl;
    }
};



int main(int argc, char const *argv[])
{
    A obj,obj2,obj3(34,67),obj4(20);
    obj.get_data();
    obj2.get_data();
    obj3.get_data();
    obj4.get_data();

    return 0;
}
