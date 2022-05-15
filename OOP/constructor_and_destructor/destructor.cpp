#include<iostream>
using namespace std;

class A
{
private:
    int x,y;
    char *s;
public:
    A() : x(10),y(20) {
        cout << "Default" << endl;
        s = new char[20];
    } //Have to provide default becasue of para

    A(int a,int b=200) : x(a),y(b){
        cout << "Parameterized Constructor" << endl;
    }
    ~A (){
        cout << "Destructor" << endl;
        delete []s;
    }
    void get_data() {
        cout << x << " " << y << endl;
    }
};



int main(int argc, char const *argv[])
{
    A *ptr;
    ptr = new A;
    delete ptr;


    return 0;
}
