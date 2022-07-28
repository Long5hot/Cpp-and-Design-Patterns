#include<iostream>
using namespace std;

class A {
    public:
    virtual void test_1() {
        cout << "test_1() in A" << endl;
    }
    virtual void test_2() {
        cout << "test_2() in A" << endl;
    }
    void test_3() {
        cout << "test_3() in A" << endl;
    }
};

class B : public A {
    public:

    void test_2() {
        cout << "test_2() in B" << endl;
    }
    void test_3() {
        cout << "test_3() in B" << endl;
    }
};

class C : public A {
    public:
    void test_1() {
        cout << "test_1() in C" << endl;
    }
    void test_3() {
        cout << "test_3() in C" << endl;
    }
};

main() {
    A *aptr;
    C obj;

    aptr = &obj;
    aptr->test_1();
    aptr->test_2();
    aptr->test_3();
}