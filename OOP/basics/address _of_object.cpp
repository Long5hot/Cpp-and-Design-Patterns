#include<iostream>
using namespace std;

class family
{
private:
    int cash,gold;
public:
    void set_data();
    void get_data();    
};
void family :: set_data() {
    cout << "Set - " << (unsigned long) this << endl;
    cout << "Enter cash and Gold : " << endl;
    cin >> cash >> gold;
}

void family :: get_data() {
    cout << "Get - " << (unsigned long)this << endl;
    cout << "Cash - " << cash << endl; 
    cout << "Gold - " << gold << endl;
}
int main() {

    family obj_1, obj_2;
    cout << "Address of obj_1 : " << (unsigned long)&obj_1 << endl;
    cout << "Address of obj_2 : " << (unsigned long)&obj_2 << endl;
    obj_1.set_data();
    obj_1.get_data();
    cout << endl;
    obj_2.set_data();
    obj_2.get_data();

}