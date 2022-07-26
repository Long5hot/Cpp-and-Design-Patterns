#include<iostream>
#include<unistd.h>
using namespace std;
int main()
{
    for(int i = 0 ; i < 10; i++)
    {
       printf("1 ");
    }
    cout << endl;
    while(1){
        cout << "Hello world" << endl;
        usleep(100000);
    }
    //while(1);

}
