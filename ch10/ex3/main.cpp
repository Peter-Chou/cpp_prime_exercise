#include <iostream>
#include "golf.h"

int main() {
  int ann_hc;
  Golf ann("Ann Birdfree", 24);
  ann.show();
  Golf andy;
  andy.show();
  std::cout << "please enter ann's new handicap: ";
  std::cin >> ann_hc;
  ann.set_handicap(ann_hc);
  ann.show();
  std::cin.get();
  std::cin.get();
  return 0;
}