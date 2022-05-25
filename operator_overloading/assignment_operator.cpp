#include<iostream>

class A {
    int x,y;
    public:
    A() : x(0),y(0) {}

    A(int a,int b) : x(a), y(b){}
    void getData() {
        std::cout << x << " " << y << std::endl;
    }
    
    void operator = (A obj_2) {
        std::cout << "Operator = overloaded" << std::endl;

        x = obj_2.x;
        y = obj_2.y;
    }
    /*
    A operator = (A obj_1) {
        std::cout << "Operator = overloaded" << std::endl;
        x = obj_1.x;
        y = obj_1.y;
        return *this;
    }*/

};


int main() {
    A obj_1(10,20),obj_2; 
    obj_2 = obj_1;
    obj_2.getData();
}