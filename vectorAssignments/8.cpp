// Write a C++ program to create a class complex with real and imaginary parts perform addition and
// subtraction of two complex objects.

#include<iostream>
using namespace std;

class COMPLEX {
    int real,img;
    public:
    void setData() {
        cout << "Enter Real and Imaginary values" << endl;
        cin >> real >> img;
    }
    void display() {
        if(img <0)
            cout << real << img <<"j" << endl;
        else 
            cout << real << "+" << img << "j" << endl;
    }
    COMPLEX add(COMPLEX obj) {
        COMPLEX temp;
        temp.real = real + obj.real;
        temp.img  = img + obj.img;
        return temp;
    }

    COMPLEX sub(COMPLEX obj) {
        COMPLEX temp;
        temp.real = real - obj.real;
        temp.img  = img - obj.img;
        return temp;
    }
};

int main() {
    COMPLEX obj_1, obj_2, obj_3;
    obj_1.setData();
    obj_2.setData();
    cout << endl;
    obj_1.display();
    obj_2.display();

    obj_3 = obj_1.add(obj_2);
    cout << endl << "Addition of first 2 in third object is" << endl;
    obj_3.display();

}

