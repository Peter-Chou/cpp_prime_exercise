#include <iostream>
#include "golf.h"

int main() {
  golf ann, andy;
  int ann_hc;
  setgolf(ann, "Ann Birdfree", 24);
  showgolf(ann);
  setgolf(andy);
  showgolf(andy);
  std::cout << "please enter ann's new handicap: ";
  std::cin >> ann_hc;
  handicap(ann, ann_hc);
  showgolf(ann);
  std::cin.get();
  std::cin.get();
  return 0;
}