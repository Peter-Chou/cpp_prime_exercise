#include "cow.h"
#include <iostream>

Cow::Cow() {
  name = "null";
  hobby = "null";
  weight = 0.0;
}

Cow::Cow(const char* nm, const char* ho, double wt) {
  name = nm;
  hobby = ho;
  weight = wt;
}

Cow::Cow(const Cow& c) {
  name = c.name;
  hobby = c.hobby;
  weight = c.weight;
}

Cow& Cow::operator=(const Cow& c) {
  if (this == &c) {
    return *this;
  }
  name = c.name;
  hobby = c.hobby;
  weight = c.weight;
  return *this;
}

void Cow::ShowCow() const {
  std::cout << "name: " << name << std::endl;
  std::cout << "hobby: " << hobby << std::endl;
  std::cout << "weight: " << weight << std::endl;
}
