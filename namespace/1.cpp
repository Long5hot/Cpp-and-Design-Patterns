#include<iostream>


//Normal method
main() {
    int x; //Why it's always initializing with zero even if its auto????
    std::cout << "x = " << x << std::endl;
    x = 20;
    std::cin >> x;
    std::cout << "x = " << x << std::endl;
}