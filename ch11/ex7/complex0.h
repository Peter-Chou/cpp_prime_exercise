#ifndef complex0_H_
#define complex0_H_
#include <iostream>

class complex {
 private:
  int real;
  int ima;

 public:
  complex() { real = ima = 0; }
  complex(int r, int i) : real(r), ima(i) {}
  ~complex() {}
  // operator overload
  complex operator+(const complex& c) const;
  complex operator-(const complex& c) const;
  complex operator*(const complex& c) const;
  complex operator~() const;
  complex operator*(const int i) const;
  // friend function overload
  friend complex operator*(const int i, const complex& c) { return c * i; }
  friend std::ostream& operator<<(std::ostream& os, const complex& c);
  friend std::istream& operator>>(std::istream& is, complex& c);
};

#endif  // ! complex0_H_
