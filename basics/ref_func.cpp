#include<iostream>
using namespace std;
int & test_2();
int * test(){
    static int k = 10;
    cout << "k = " << k << endl;
    return &k;
}

main()
{
    *test() = 20;
    test();

    test_2() = 20;
    test_2();
}

int & test_2(){
    static int k = 10;
    cout << "k = " << k << endl;
    return k;
}