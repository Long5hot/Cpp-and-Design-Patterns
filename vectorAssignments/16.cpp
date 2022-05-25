// Write a C++ program to demonstrate Dynamic Constructor.

#include<iostream>

class Dynamic {
    int x ,y ;
    public:
    Dynamic() : x(100), y(200) {
        std::cout << "Default" << std::endl;
    }
    Dynamic(int a , int b) : x(a), y(b) {
        std::cout << "Para" << std::endl;
    }
    Dynamic(Dynamic & temp) {
        std::cout << "Copy" << std::endl;
        x = temp.x;
        y = temp.y;
    }
    void display() {
        std::cout << x << " " << y << std::endl;
    }
};

int main() {
    Dynamic *obj_1, *obj_2, *obj_3;
    obj_1 = new Dynamic;
    obj_2 = new Dynamic(10,20);
    obj_3 = new Dynamic(*obj_2);
    obj_1->display();
    obj_2->display();
    obj_3->display();
}