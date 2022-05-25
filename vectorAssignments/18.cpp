// Write a C++ program to demonstrate Singleton Class.

#include<iostream>
using namespace std;

class singleton {
    static singleton *single;
    
    public:
    singleton() {
        cout << "Constructor" << endl;
    }
    static singleton * createObject() {
        if(single==NULL) 
            single = new singleton;
        return single;
    }

};
singleton * singleton :: single;
int main() {
    singleton *ptr_1, *ptr_2, *ptr_3;
    ptr_1 = singleton::createObject(); // COnstructor is executing only for first object;
    ptr_2 = singleton::createObject();
    ptr_3 = singleton::createObject();
    cout << "Size of ptr 1 : " << sizeof(*ptr_1) << endl;
    cout << "Size of ptr 2 : " << sizeof(*ptr_2) << endl;
    cout << "Size of ptr 3 : " << sizeof(*ptr_3) << endl;


}