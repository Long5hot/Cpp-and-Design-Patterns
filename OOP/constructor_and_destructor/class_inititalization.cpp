#include<iostream>
using namespace std;

class A {
    public:
    int x,y;
    public:
    void setData(int a,int b){
        x = a, y=b;
    }
    void getData(){
        cout << x << " " << y << endl;
    }
} obj = {100,200}; // Wont work if x and y are in private

int main() {
    obj.setData(10,20);
    obj.getData();
}