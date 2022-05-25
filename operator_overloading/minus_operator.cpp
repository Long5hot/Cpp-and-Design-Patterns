#include<iostream>

class A {
    int x,y;
    public:
    A() : x(0),y(0) {}

    A(int a,int b) : x(a), y(b){}
    void getData() {
        std::cout << x << " " << y << std::endl;
    }

    A operator - (A obj_2) {
        std::cout << "Opearator - Overloaded" << std::endl;
        A ret;
        ret.x = x - obj_2.x;
        ret.y = y - obj_2.y;
        return ret;
    }
};


int main() {
    A obj_1(10,20), obj_2(100,200), obj_4(20,50), obj_5(40,60);
    A obj_3 = obj_1 - obj_2 - obj_4 - obj_5; 

    obj_3.getData();
}