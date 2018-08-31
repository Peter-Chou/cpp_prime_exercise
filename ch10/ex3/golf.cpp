#include "golf.h"
#include <iostream>
#include <string>

Golf::Golf(const char* name, int hc) {
  fullname = name;
  handicap = hc;
}

Golf::Golf(const std::string name, int hc) {
  fullname = name;
  handicap = hc;
}

Golf::Golf() {
  std::string fname;
  int hc;
  std::cout << "please enter full name: ";
  std::getline(std::cin, fname);
  std::cout << "please enter handicap: ";
  std::cin >> hc;
  Golf tmp(fname, hc);
  *this = tmp;
}

void Golf::set_handicap(int hc) { handicap = hc; }

void Golf::show() const {
  std::cout << "name: " << fullname << std::endl;
  std::cout << "handicap: " << handicap << std::endl;
}