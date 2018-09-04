#include "move.h"
#include <iostream>

namespace MOVE {
Move::Move(double a, double b) {
  x = a;
  y = b;
}

void Move::showmove() const { std::cout << "point(" << x << ", " << y << ")"; }

Move Move::add(const Move& m) const { return Move(x + m.x, y + m.y); }

void Move::reset(double a, double b) {
  x = a;
  y = b;
}
}  // namespace MOVE