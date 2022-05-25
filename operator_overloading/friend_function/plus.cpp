#include<iostream>

class A {
    int x ,y;
    public:
    A() : x(0),y(0) {} 
    A(int m,int n) : x(m) ,y(n) {} 
    void getData(){
        std::cout << x << " " << y << std::endl;
    }
    friend A operator + (A,A);
};

A operator + (A obj_1 , A obj_2) {
    A ret;
    std::cout << "Friend function + overloading" << std::endl;
    ret.x = obj_1.x + obj_2.x;
    ret.y = obj_1.y + obj_2.y;
    return ret;
}

int main() {
    A obj_1(10,20), obj_2(100,200);
    A obj_3 = obj_1 + obj_2;
    obj_3.getData();
}