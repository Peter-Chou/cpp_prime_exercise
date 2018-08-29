#include <iostream>
#include "sales.h"

int main() {
  using namespace SALES;
  Sales s1, s2;
  int N = 2;
  double s2_sales[N] = {1534.45, 11100.2};
  setSales(s1);
  showSales(s1);
  setSales(s2, s2_sales, N);
  std::cout << std::endl;
  std::cout << "********** another Sales data *********" << std::endl;
  std::cout << std::endl;
  showSales(s2);
  std::cin.get();
  return 0;
}