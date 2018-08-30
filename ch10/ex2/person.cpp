#include "person.h"
#include <cstring>
#include <iostream>

Person::Person(const std::string& ln, const char* fn) {
  lname = ln;
  std::strncpy(fname, fn, LIMIT);
}
void Person::Show() const {
  std::cout << "first name: " << fname << std::endl;
  std::cout << "last name: " << lname << std::endl;
}
void Person::FormalShow() const {
  std::cout << "last name: " << lname << std::endl;
  std::cout << "first name: " << fname << std::endl;
}