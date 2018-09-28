#include <iostream>
#include "cow.h"

int main() {
  Cow s1;
  Cow s2("somebody", "tennis", 53.4);
  std::cout << "show s2: \n";
  s2.ShowCow();
  s1 = Cow("assign", "football", 66.6);
  std::cout << "show s1: \n";
  s1.ShowCow();
  std::cin.get();
  return 0;
}