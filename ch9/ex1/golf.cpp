#include "golf.h"
#include <iostream>

void setgolf(golf& g, const char* name, int hc) {
  g.fullname = name;
  g.handicap = hc;
}

int setgolf(golf& g) {
  std::cout << "please enter full name: ";
  std::getline(std::cin, g.fullname);
  std::cout << "please enter handicap: ";
  std::cin >> g.handicap;
  if (g.fullname.size()) {
    return 1;
  } else {
    return 0;
  }
}

void handicap(golf& g, int hc) { g.handicap = hc; }

void showgolf(const golf& g) {
  std::cout << "name: " << g.fullname << std::endl;
  std::cout << "handicap: " << g.handicap << std::endl;
}