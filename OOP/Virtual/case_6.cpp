#include<iostream>
#include<cstring>
using namespace std;

class A {
    char * name_1;
    public:
    A() {
        cout << "CONSTRUCTOR A" << endl;
        name_1 = new char[10];
        strcpy(name_1, "Class A");
    }
    virtual ~A() {
        cout << "DESTRUCTOR A" << endl;
        delete [] name_1;
    }
};

class B : public A {
    char * name_2;
    public:
    B() {
        cout << "CONSTRUCTOR B" << endl;
        name_2 = new char[10];
        strcpy(name_2, "Class B");
    }
    ~B() {
        cout << "DESTRUCTOR B" << endl;
        delete [] name_2;
    }
};

class C : public B {
    char * name_3;
    public:
    C() {
        cout << "CONSTRUCTOR C" << endl;
        name_3 = new char[10];
        strcpy(name_3, "Class C");
    }
    ~C() {
        cout << "DESTRUCTOR C" << endl;
        delete [] name_3;
    }
};

main() {
    A * ptr;
    ptr = new C;
    delete ptr;
}