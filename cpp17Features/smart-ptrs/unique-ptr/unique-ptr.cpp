#include <iostream>

int main (int argc, char *argv[]) {
  
  int *array = new int[100];

  for(int i = 0; i < 100; ++i) {
    array[i] = i;
  }


  int *ptr = array;

  std::cout << "*ptr  =  " << *ptr << std::endl;
  
  int *ptr2 = array;

  std::cout << "*ptr2  =  " << *ptr2 << std::endl;

  delete[] array;

  return 0;
}
