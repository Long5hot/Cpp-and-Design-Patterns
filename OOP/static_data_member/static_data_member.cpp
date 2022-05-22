#include<iostream>
using namespace std;

class Facebook {
    char num[10];
    char name[20];
    public:
    static int count;
    Facebook(){
        cout << "Enter Name and number.." << endl;
        cin >> name >> num;
        count++;
    }
    ~Facebook() {
        cout << "Account Deleted" << endl;
        count--;
    }
    
};
int Facebook :: count;

int main() {
    Facebook obj1,obj2;
    {
        Facebook obj3,obj4;
    }
    cout << "Count : " << Facebook::count << endl;
}