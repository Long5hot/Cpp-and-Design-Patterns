// Write a C++ program to demonstrate private Constructor.

#include<iostream>

class Private {
    int x,y;
    Private() : x(10),y(20){
        std::cout << "Private Constructor" << std::endl;
    }
    public:
    static void createObject() {
        Private obj;
    }
    // void display() {
        // std::cout << x << " " << y << std::endl;
    // }  //Dont kno any way to display the values of private member function
};
int main() {
    Private::createObject();
    // Private :: display();
}