#include<iostream>
using namespace std;

namespace SBI {
    int accno = 3456;
    int balance = 10000;
    void welcome() {
        cout << "Welcome to SBI" << endl;
    }
}

namespace AXIS {
    int accno = 1234;
    int balance = 5000;
    void welcome() {
        cout << "Welcome to AXIS" << endl;
    }
}

using namespace SBI;

main(){
    welcome();
    cout << "accno = " << accno << endl;
    cout << "balance = " << balance << endl;
    cout << "accno = " << AXIS::accno << endl;
    cout << "balance = " << AXIS::balance << endl;
    welcome();
}