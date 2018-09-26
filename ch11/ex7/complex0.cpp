#include "complex0.h"
#include <iostream>

complex complex::operator+(const complex& c) const {
  complex res;
  res.real = real + c.real;
  res.ima = ima + c.ima;
  return res;
}

complex complex::operator-(const complex& c) const {
  complex res;
  res.real = real - c.real;
  res.ima = ima - c.ima;
  return res;
}

complex complex::operator*(const complex& c) const {
  complex res;
  res.real = real * c.real - ima * c.ima;
  res.ima = real * c.ima + ima * c.real;
  return res;
}

complex complex::operator*(const int c) const {
  complex res;
  res.real = real * c;
  res.ima = ima * c;
  return res;
}

complex complex::operator~() const {
  complex res;
  res.real = real;
  res.ima = -1 * ima;
  return res;
}

std::ostream& operator<<(std::ostream& os, const complex& c) {
  os << "(" << c.real << ", " << c.ima << ")";
  return os;
}

std::istream& operator>>(std::istream& is, complex& c) {
  std::cout << "real: ";
  std::cin >> c.real;
  std::cout << "imaginary: ";
  std::cin >> c.ima;
  return is;
}