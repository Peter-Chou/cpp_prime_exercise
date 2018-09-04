#include <iostream>
#include "move.h"

using MOVE::Move;

int main() {
  Move origin;
  Move p1(2, 3);
  std::cout << "point(0, 0) + point(2, 3) : ";
  origin = origin.add(p1);
  origin.showmove();
  std::cout << std::endl;
  Move p2(3, 2);
  origin.showmove();
  std::cout << " + point(3, 2): ";
  origin = origin.add(p2);
  origin.showmove();
  std::cout << std::endl;
  std::cout << "Reset point to (0, 0): ";
  origin.reset();
  origin.showmove();
  std::cin.get();
  return 0;
}