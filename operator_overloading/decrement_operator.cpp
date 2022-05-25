#include<iostream>

class A {
    int x,y;
    public:
    A() : x(0),y(0) {}
    A(int m, int n): x(m), y(n) {}
    void getData() {
        std::cout << x << " " << y << std::endl;
    }
    A operator  -- () {
        std::cout << "Pre --" << std :: endl;
        x = --x;
        y = --y;
        return *this;
    }
    A operator -- (int m) {
        std::cout << "Post --" << std::endl;
        A ret;
        ret.x = x--;
        ret.y = y--;
        return ret;

    }
};

int main() {
    A obj_1(10,20);
    A obj_2 = obj_1--;
    // obj_2++;
    obj_1--;
    obj_1.getData();
    obj_2.getData();
}