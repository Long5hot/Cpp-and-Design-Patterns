#include<iostream>
using namespace std;

class family
{
private:
    int cash,gold;
public:
    void set_data() {
        cout << "Enter cash and Gold : " << endl;
        cin >> cash >> gold;
     }
    void get_data() {
         cout << "Cash - "<< cash << endl << "Gold - " << gold << endl;
     }
};


int main() {

    family obj;
    obj.set_data();
    obj.get_data();

}