#include <iostream>
#include "stonewt.h"

int main() {
  Stonewt s1(52.5);
  Stonewt s2(2, 1.2);
  std::cout << "s1 + s2 = " << s1 + s2 << std::endl;
  std::cout << "s1 - s2 = " << s1 - s2 << std::endl;
  Stonewt s3 = 5 * s1;
  std::cout << "5 * s1 = " << s3 << std::endl;
  s3.toStn();
  std::cout << "5 * s1 = " << s3 << std::endl;

  return 0;
}