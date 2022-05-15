#include<iostream>
using namespace std;

class A
{
private:
    int x,y;
public:
    A(){
        cout << "Default Constructor" << endl;
        x=10, y =10;
    }

    void get_data() {
        cout << x << " " << y << endl;
    }

};



int main(int argc, char const *argv[])
{
    A obj,obj2,obj3;
    obj.get_data();
    obj2.get_data();
    obj3.get_data();

    return 0;
}
