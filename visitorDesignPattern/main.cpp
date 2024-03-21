#include <iostream>
#include <vector>

// Base class
struct Monster {

  virtual ~Monster() {}
  virtual void sing() = 0;
};

struct Orc : public Monster {
  
  Orc() { std::cout << "Orc::Orc()" << std::endl;}
  void sing() {
    std::cout << "Orc:sing()" << std::endl;
  }
};

struct Goblin : public Monster {
  
  Goblin() { std::cout << "Goblin::Goblin()" << std::endl;}
  void sing() {
    std::cout << "Goblin::sing()" << std::endl;
  }
};

int main() {

  std::vector<Monster*> monsters;
  monsters.emplace_back(new Orc);
  monsters.emplace_back(new Goblin);
  
  for(const auto & m : monsters) {
    m->sing();
  }

  return 0;
}
