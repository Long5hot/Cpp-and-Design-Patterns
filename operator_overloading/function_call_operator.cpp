#include<iostream>

class A {
    int x,y;
    public:
    A() : x(0),y(0){}

    void operator () (int m,int n){ //Cant be overloaded with
        x = m;          //Friend function
        y = n;          
    }

    void getData() {
        std::cout << x << " " << y << std::endl;
    }
};

int main() {
    A obj;
    obj(10,20);
    obj.getData();
}