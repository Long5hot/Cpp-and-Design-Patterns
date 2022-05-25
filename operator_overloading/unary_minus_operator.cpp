#include<iostream>

class A {
    int x,y;
    public:
    A() : x(0),y(0) {}
    A(int m, int n): x(m), y(n) {}
    void getData() {
        std::cout << x << " " << y << std::endl;
    }
    /*
    A operator - () {
       x = -x;      
       y = -y;      //Cant do this since this is going 
       return *this;    // to change its own values...
    }*/
    A operator - () {
        A ret;      //Thats why taking temparory object
        ret.x = -x;
        ret.y = -y;
        return ret;
    }
    
};

int main() {
    A obj_1(10,20);
    A obj_2 = -obj_1;
    obj_1.getData();
    obj_2.getData();
}