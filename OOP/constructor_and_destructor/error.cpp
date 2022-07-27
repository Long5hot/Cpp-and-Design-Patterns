#include<iostream>

using namespace std;

class my_class {
private:
    int x,y;
public:
    my_class() : x(10),y(20) {
        cout << "Default Constructor" << endl;
    } //Have to provide default becasue of para
    my_class(int a,int b=200) : x(a),y(b){
        cout << "Parameterized Constructor" << endl;
    }
    
    my_class(my_class & temp) {
        cout << "Copy Constructor" << endl;
        x = temp.x;
        y = temp.y;
    }
    void get_data() {
        cout << x << " " << y << endl;
    }
};

main(){
    my_class obj;
    obj.get_data();
}
