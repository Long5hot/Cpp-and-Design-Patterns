#include<iostream>
using namespace std;

class family {
    int gold,cash;
    public:
    friend void print_data(family );
    friend void print_data(family *);
};

void print_data(family obj) {
    cout << "cash - " << obj.cash << endl;
    cout << "Gold - " << obj.gold << endl;
}

void print_data(family *obj) {
    cout << "cash - " << obj->cash << endl;
    cout << "Gold - " << obj->cash << endl;
}
int main(int argc, char const *argv[])
{
    family obj_1,obj_2;
    print_data(obj_1);
    print_data(&obj_2);
    
    return 0;
}
