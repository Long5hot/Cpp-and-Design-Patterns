#include<iostream>
using namespace std;

class family
{
private:
    int cash,gold;
public:
    void set_data(family *const ) {
        cout << "Enter cash and Gold : " << endl;
        cin >> this->cash ;
        cin >> this->gold;
     }
    void get_data(family *const ) {
         cout << "Cash - "<< this->cash << endl << "Gold - " << this->gold << endl;
     }
};


int main() {

    family obj_1,obj_2;
    obj_1.set_data(&obj_1);
    obj_1.get_data(&obj_1);
    obj_2.set_data(&obj_2);
    obj_2.get_data(&obj_2);

}