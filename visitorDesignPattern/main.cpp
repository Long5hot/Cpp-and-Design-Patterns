#include <iostream>
#include <vector>

struct Orc;
struct Goblin;

// Visitor base class which tells us what types of objects
//  that we can visit.

struct MonsterVisitor {
  virtual ~MonsterVisitor() = default;

  virtual void visit(const Orc &) const = 0;
  virtual void visit(const Goblin &) const = 0;
};

struct DrawMonsterVisitor : public MonsterVisitor {
  void visit(const Orc &orc) const override {
    std::cout << "Drawing Orc from MonsterVisitor" << std::endl;
  }

  void visit(const Goblin &goblin) const override {
    std::cout << "Drawing Goblin from MonsterVisitor" << std::endl;
  }
};

// Base class
struct Monster {

  virtual ~Monster() {}
  virtual void accept(const MonsterVisitor &) = 0;
};

struct Orc : public Monster {

  Orc() { std::cout << "Orc::Orc()" << std::endl; }
  void accept(const MonsterVisitor &visitor) override {
    std::cout << "Orc::accept()" << std::endl;
    visitor.visit(*this);
  }
};

struct Goblin : public Monster {

  Goblin() { std::cout << "Goblin::Goblin()" << std::endl; }

  void accept(const MonsterVisitor &visitor) override {
    std::cout << "Goblin::accept()" << std::endl;
    visitor.visit(*this);
  }
};

void drawAllMonsters(const std::vector<Monster*> & monsters) {
  for(auto const &m : monsters) {
    m->accept(DrawMonsterVisitor{});
  }
}

int main() {

  std::vector<Monster *> monsters;
  monsters.emplace_back(new Orc);
  monsters.emplace_back(new Goblin);

  drawAllMonsters(monsters);

  std::cout << std::endl << std::endl;

  Monster *myMonster = new Orc;

  DrawMonsterVisitor dmv;
  myMonster->accept(dmv);

  return 0;
}
