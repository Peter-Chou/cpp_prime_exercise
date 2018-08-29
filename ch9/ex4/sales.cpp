#include "sales.h"
#include <algorithm>
#include <iostream>

namespace SALES {
using std::cin;
using std::cout;
void setSales(Sales& s, const double ar[], int n) {
  int i;
  double total = 0.0;
  for (i = 0; i < std::min(QUARTERS, n); i++) {
    s.sales[i] = ar[i];
    total += ar[i];
  }
  if (n < QUARTERS) {
    for (int j = i; j < QUARTERS; j++) {
      s.sales[j] = 0.0;
    }
  }
  s.average = total / QUARTERS;
  s.min = *std::min_element(s.sales, s.sales + QUARTERS);
  s.max = *std::max_element(s.sales, s.sales + QUARTERS);
}

void setSales(Sales& s) {
  double total;
  for (int i = 0; i < QUARTERS; i++) {
    cout << "Please enter quarter " << i + 1 << "sales: $";
    cin >> s.sales[i];
    total += s.sales[i];
  }
  s.average = total / QUARTERS;
  s.min = *std::min_element(s.sales, s.sales + QUARTERS);
  s.max = *std::max_element(s.sales, s.sales + QUARTERS);
}

void showSales(const Sales& s) {
  for (int i = 0; i < QUARTERS; i++) {
    cout << "quarter " << i + 1 << " sales: $" << s.sales[i] << std::endl;
  }
  cout << "average sales: $" << s.average << std::endl;
  cout << "maximum sales: $" << s.max << std::endl;
  cout << "minimum sales: $" << s.min << std::endl;
}

};  // namespace SALES