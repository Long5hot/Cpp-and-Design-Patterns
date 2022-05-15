#include<iostream>
using namespace std;

class A
{
private:
    int x,y;
public:
    A() : x(10),y(20) {
        cout << "Default" << endl;
    } //Have to provide default becasue of para

    A(int a,int b=200) : x(a),y(b){
        cout << "Parameterized Constructor" << endl;
    }

    void get_data() {
        cout << x << " " << y << endl;
    }
};



int main(int argc, char const *argv[])
{
    A *ptr,*ptr_2;
    ptr = new A;
    ptr_2 = new A;
    return 0;
}
