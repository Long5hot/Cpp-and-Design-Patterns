#include<iostream>
using namespace std;

class A {
    public:
    int x;
    A() {
        cout << "CONSTRUCTOR A" << endl;
        // x = 0;
    }
    A(int x) {
        this->x = x;
        cout << "CONSTRUCTOR A(int x)"  << x << endl;
        
    }
    ~A() {
        cout << "DESTRUCTOR A" << endl;
    }
};

class B : virtual public A {
    public:
    int y;
    B() {
        cout << "CONSTRUCTOR B" << endl;
    }
    B(int y) {
        this->y = y;
        cout << "CONSTRUCTOR B(int y)" << y << endl;
        
    }
    ~B() {
        cout << "DESTRUCTOR B" << endl;
    }
};

class C : virtual public A {
    public:
    int z;
    C() {
        cout << "CONSTRUCTOR C" << endl;
    }
    C(int z) {
        this->z = z;
        cout << "CONSTRUCTOR C(int z)" << z << endl;
        
    }
    ~C() {
        cout << "DESTRUCTOR C" << endl;
    }
};

class D : public B, public C {
    public:
    int w;
    D() {
        cout << "CONSTRUCTOR D" << endl;
    }
    D(int w) {
        this->w = w;
        cout << "CONSTRUCTOR D(int w)" << w << endl;
        
    }
    ~D() {
        cout << "DESTRUCTOR D" << endl;
    }
    void getData() {
        cout << "B::X : " <<B::x << " C::X " <<  C::x << endl;
        cout << "Y : " << y << " Z : " << z << " W : " << w << endl;
    }
};

main() {
    D obj;
    obj.getData();
    cout << "Size of A : " << sizeof(A) << endl;
    cout << "Size of B : " << sizeof(B) << endl;
    cout << "Size of C : " << sizeof(C) << endl;    
    cout << "Size of D : " << sizeof(D) << endl;
}