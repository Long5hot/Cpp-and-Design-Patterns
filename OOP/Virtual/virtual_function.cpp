#include<iostream>
using namespace std;

class Base {
    public:
    virtual void test() {
        cout << "test() in Base" << endl;
    }
};

class Derived : public Base  {
    public:
    void test() {
        cout << "test() in Derived" << endl;
    }
};

main() {
    Base *bptr;
    Derived obj;
    bptr = &obj;
    bptr->test();
}