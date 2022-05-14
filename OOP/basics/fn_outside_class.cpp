#include<iostream>
using namespace std;

class family
{
private:
    int cash,gold;
public:
    void set_data(int, int);
    void get_data();    
};
void family :: set_data(int a,int b) {
    this->cash = a, this->gold = b;
}

void family :: get_data() {
    cout << "Cash - " << this->cash << endl; 
    cout << "Gold - " << this->gold << endl;
}
int main() {

    family obj_1, obj_2;
    cout << "Address of obj_1 : " << (unsigned long)&obj_1 << endl;
    cout << "Address of obj_2 : " << (unsigned long)&obj_2 << endl;
    cout << endl;
    obj_1.set_data(45,200);
    obj_1.get_data();
    cout << endl;
    obj_2.set_data(100,300);
    obj_2.get_data();

}