#include<iostream>
using namespace std;

class COMPLEX {
    int real,img;

    public:

    void set_data(int a, int b) {
        real = a;
        img = b;
    }
    void get_data() {
        if(img<0) {
            cout << "Complex : " << real << img << "j";
        }
        else {
            cout << "Complex : " << real << "+" << img << "j";
        }
        cout << endl;
    }
    
    void addition (COMPLEX temp_1, COMPLEX temp_2) {
        cout << "Call by Object Value" << endl;
        real = temp_1.real + temp_2.real;
        img = temp_1.img + temp_2.img;
    }

    void addition (COMPLEX * temp_1, COMPLEX *temp_2) {
        cout << "Call by Object Adress" << endl;
        real = temp_1->real + temp_2->real;
        img = temp_1->img + temp_2->img;
    }

    void addition_ref (COMPLEX &temp_1, COMPLEX &temp_2) {
        cout << "Call by Object Reffrence" << endl;
        real = temp_1.real + temp_2.real;
        img = temp_1.img + temp_2.img;
    }
};

int main(int argc, char const *argv[])
{
    COMPLEX obj_1, obj_2, obj_3,obj_4,obj_5;
    obj_1.set_data(10,-20);
    obj_2.set_data(50,30);
    obj_1.get_data();
    obj_2.get_data();

    obj_3.addition(obj_1,obj_2);
    obj_4.addition(&obj_1,&obj_2);
    obj_5.addition_ref(obj_1,obj_2);

    obj_3.get_data();
    obj_4.get_data();
    obj_5.get_data();
    return 0;
}
