#include<iostream>
using namespace std;

class A {
    int x,y;
    A() {
        cout << "Private Constructor" << endl;
    }
    public:
    static void create_object() {
        A obj;
    }
};

int main() {
    A :: create_object();
}