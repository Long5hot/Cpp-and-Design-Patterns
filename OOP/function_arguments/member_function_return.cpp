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
    
    COMPLEX addition (COMPLEX temp) {
        cout << "Call by Object Value" << endl;
        COMPLEX ret;
        ret.real = real + temp.real;
        ret.img = img + temp.img;
        return ret;
    }

    COMPLEX * addition (COMPLEX * temp) {
        cout << "Call by Object Adress" << endl;
        static COMPLEX ret; //Segmentation Fault could come because of local stack destruction
        ret.real = real + temp->real;
        ret.img = img + temp->img;
        return & ret;
    }

    COMPLEX & addition_ref (COMPLEX &temp) {
        cout << "Call by Object Reffrence" << endl;
        static COMPLEX ret; //Segmentation Fault could come because of local stack destruction
        ret.real = real + temp.real;
        ret.img = img + temp.img;
        return ret;
    }
};

int main(int argc, char const *argv[])
{
    COMPLEX obj_1, obj_2, obj_3,*obj_4,obj_5;
    obj_1.set_data(10,-20);
    obj_2.set_data(50,30);
    obj_1.get_data();
    obj_2.get_data();
    obj_3 = obj_1.addition(obj_2);
    obj_3.get_data();
    obj_4 = obj_1.addition(&obj_2);
    obj_4->get_data();
    obj_5 = obj_1.addition_ref(obj_2);
    obj_5.get_data();
    return 0;
}
