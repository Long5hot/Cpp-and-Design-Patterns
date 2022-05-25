// Write a C++ Program to exchange values of two variables b/w two classes using friend function.
#include<iostream>
class Two;
class One {
    int a,b;
    friend void swap(One &,Two &);
    public:
    void setData() {
        std::cout << "Enter for class one" << std::endl;
        std::cin >> a >> b;
    }
    void display() {
        std::cout << "A - " << a << " B- " << b << std::endl;
    }
};
class Two{
    int a,b;
    friend void swap(One &, Two &);
    public:
    void setData() {
        std::cout << "Enter for class one" << std::endl;
        std::cin >> a >> b;
    }
    void display() {
        std::cout << "A - " << a << " B- " << b << std::endl;
    }
};

void swap(One & temp_1, Two & temp_2) {
    temp_2.a = temp_1.a + temp_2.a - (temp_1.a = temp_2.a);
    temp_2.b = temp_1.b + temp_2.b - (temp_1.b = temp_2.b);
}

int main() {
    One obj1;
    Two obj2;
    obj1.setData();
    obj2.setData();
    std:: cout << std:: endl;
    obj1.display();
    obj2.display();
    swap(obj1,obj2);
    std::cout << std::endl;
    obj1.display();
    obj2.display();    
}