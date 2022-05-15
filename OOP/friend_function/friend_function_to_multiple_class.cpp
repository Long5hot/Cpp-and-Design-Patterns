#include<iostream>
using namespace std;

class son;
class father {
    char name[20];
    float salary;
    friend void income_tax(father, son);
    public:
    void set_data() {
        cout << "Enter Name of Father: "; 
        cin >> name;
        cout << "Enter salary : ";
        cin >> salary;
    }
};
class son {
    char name[20];
    float salary;
    friend void income_tax(father,son);
    public:
    void set_data() {
        cout << "Enter Name Son: ";
        cin >> name;
        cout << "Enter salary : ";
        cin >> salary;
    }
};
void income_tax(father obj_1, son obj_2) {
    float total;
    total = obj_1.salary + obj_2.salary;
    if(total<50000) {
        cout << "Come next year." << endl;
    }
    else {
        cout << "Pay 45000 Tax." << endl;
    }
}

int main(int argc, char const *argv[])
{
    father object_1;
    son object_2;
    object_1.set_data();
    object_2.set_data();
    income_tax(object_1,object_2);
    return 0;
}
