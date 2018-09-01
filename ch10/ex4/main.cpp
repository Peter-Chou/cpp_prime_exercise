#include <iostream>
#include "sales.h"

using SALES::Sales;

int main() {
  const int N = 2;
  double s2_sales[N] = {1534.45, 11100.2};
  Sales s1;
  s1.show();
  std::cout << std::endl;
  std::cout << "********** another Sales data *********" << std::endl;
  std::cout << std::endl;
  Sales s2(s2_sales, N);
  s2.show();
  std::cin.get();
  return 0;
}