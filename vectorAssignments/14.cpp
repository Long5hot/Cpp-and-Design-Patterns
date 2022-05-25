// Write a C++ program to demonstrate Deep Copy.

#include<iostream>
#include<cstring>
class Deep{
    char * str;
    public:
    Deep(const char * temp) {
    str = new char[strlen(temp) +1];
    strcpy(str,temp);
    } 
    Deep(Deep &temp) {
        str = new char[strlen(temp.str) +1];
        strcpy(str,temp.str);
    }
    void display() {
        std::cout << str << std::endl;
    }
    void modify() {
        str[0] = 'Y';
    }
};

int main() {
    Deep obj_1("Kishan"), obj_2(obj_1);
    Deep obj_3 = obj_1;
    obj_1.display();
    obj_2.display();
    obj_3.display();
    std::cout << std::endl;
    obj_1.modify(); //Even after changing object 1 object 2 Doesn't get changed...

    obj_1.display();
    obj_2.display();
    obj_3.display();


}