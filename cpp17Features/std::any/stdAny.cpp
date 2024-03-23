#include <any>
#include <ostream>
#include <vector>
//#include <string>
#include <iostream>

int main() {
  std::any a = 5;
  
  std::vector<std::any> v {5,6, "Hello World"};

  std::cout << v.size() << std::endl;

  std::cout << std::any_cast<int>(v[0]) << std::endl;

  std::cout << v[1].type().name() << std::endl;

}
