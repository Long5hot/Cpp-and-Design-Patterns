#include<iostream>

class ARRAY {
    int a[5];
    public:
    int &  operator [] (int index) {
        return a[index];
    }
};


int main() {
    ARRAY obj_1;

    for(int i=0; i<5; i++) 
        std::cin >> obj_1[i];
    
    for(int i=0; i<5; i++) 
        std::cout << obj_1[i] <<" ";
    std::cout << std::endl;

}