#include "plorg.h"
#include <iostream>

void Plorg::report() {
  std::cout << "name: " << name << " ,\t\t CI: " << ci << std::endl;
}

void Plorg::ci_set(int c) { ci = c; }