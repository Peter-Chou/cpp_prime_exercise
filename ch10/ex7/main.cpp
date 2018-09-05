#include <iostream>
#include "plorg.h"

int main() {
  Plorg p1;
  p1.report();
  std::cout << "initialize Plorg only with CI = 100:\n";
  Plorg p2(100);
  p2.report();
  std::cout << "initialize Plorg with name = \"charles lee\", CI = 80\n";
  Plorg p3(80, "charles lee");
  p3.report();
  std::cout << "set charles's CI to 120:\n";
  p3.ci_set(120);
  p3.report();
  std::cin.get();
  return 0;
}