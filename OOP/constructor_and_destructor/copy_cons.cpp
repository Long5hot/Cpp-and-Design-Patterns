#include<iostream>
using namespace std;

class A
{
private:
    int x,y;
public:
    A() : x(10),y(20) {
    } //Have to provide default becasue of para

    A(int a,int b=200) : x(a),y(b){
        cout << "Parameterized Constructor" << endl;
    }
    A(A & temp) {
        cout << "Copy Constructor" << endl;
        x = temp.x;
        y = temp.y;
    }

    void get_data() {
        cout << x << " " << y << endl;
    }
};

A test (A temp) {   //Copy cons will be called while passing arguments as object
    cout << "Test function" << endl;
    return temp;    // And returning value as object
}

int main(int argc, char const *argv[])
{
    A obj,obj2,obj3(34,67),obj4(20),obj5(obj2),obj6 = obj2;
    obj.get_data();
    obj2.get_data();
    obj3.get_data();
    obj4.get_data();
    obj5.get_data();
    obj6.get_data();
    test(obj);
    return 0;
}
