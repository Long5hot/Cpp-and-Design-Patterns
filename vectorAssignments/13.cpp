// Write a C++ program to demonstrate Shallow Copy.

#include<iostream>
#include<cstring>
class Shallow{
    char * str;
    public:
    Shallow(const char * temp) {
    str = new char[strlen(temp) +1];
    strcpy(str,temp);
    } 
    void display() {
        std::cout << str << std::endl;
    }
    void modify() {
        str[0] = 'Y';
    }
};

int main() {
    Shallow obj_1("Kishan"), obj_2(obj_1);
    obj_1.display();
    obj_2.display();
    std::cout << std::endl;
    obj_1.modify(); //Even after changing object 1 object 2 also get changed...

    obj_1.display();
    obj_2.display();

}