// Write a C++ Program to declare 3 classes. Declare private integers array as data members in each
// class. Perform addition of two data member arrays into array of third class using friend function

#include<iostream>

class Result;
class Two;
class One {
    int a[5];
    friend void sumofTwo(One ,Two, Result&);
    public:
    One() :  a{10,20,30,40,50} {};
    
    void display(){
        int ele = sizeof(a)/sizeof(a[0]);
        std::cout << "Ele " << ele << std::endl;        
        for(int i=0;i<ele;i++) 
            std::cout << a[i] << " " ;
        std::cout<< std::endl;
    }
};
class Two {
    int a[5];
    friend void sumofTwo(One ,Two, Result&);
    public:
    Two() : a{100,200,300,400,500} {};
        
    void display(){
        int ele = sizeof(a)/sizeof(a[0]);
        std::cout << "Ele " << ele << std::endl;

        for(int i=0;i<ele;i++) 
            std::cout << a[i] << " " ;
        std::cout<< std::endl;
    }

};
class Result {
    int a[10];
    friend void sumofTwo(One ,Two, Result &);
    public:
    void display(){
        int ele = sizeof(a)/sizeof(a[0]);
        std::cout << "Ele " << ele << std::endl;
        for(int i=0;i<ele;i++) 
            std::cout << a[i] << " " ;
        std::cout<< std::endl;
    }

};
void sumofTwo(One obj1, Two obj2, Result & obj3) {
    int ele_1 = sizeof(obj1.a)/sizeof(obj1.a[0]);
    int ele_2 = sizeof(obj2.a)/sizeof(obj2.a[0]);
    
    if(ele_1>ele_2)
        for(int i=0; i<ele_2; i++) 
            obj3.a[i] = obj1.a[i] + obj2.a[i];
    else 
       for(int i=0; i<ele_1; i++) 
            obj3.a[i] = obj1.a[i] + obj2.a[i];

}
int main() {
    One obj1;
    Two obj2;
    Result obj3;
    obj1.display();
    obj2.display();
    // obj3.display();
    std::cout << std::endl;
    sumofTwo(obj1,obj2,obj3);
    // Summation will be till 5 and other 5 will be garbage values;
    obj1.display();
    obj2.display();
    obj3.display();
}
