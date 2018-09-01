#include "sales.h"
#include <algorithm>
#include <iostream>

using std::cin;
using std::cout;

SALES::Sales::Sales(const double* ar, int n) {
  int i;
  double total = 0.0;
  for (i = 0; i < QUARTERS; i++) {
    if (i <= n) {
      sales[i] = ar[i];
      total += ar[i];
    } else {
      sales[i] = 0.0;
    }
  }
  average = total / QUARTERS;
  min = *std::min_element(sales, sales + QUARTERS);
  max = *std::max_element(sales, sales + QUARTERS);
}

SALES::Sales::Sales() {
  double arr[QUARTERS];
  for (int i = 0; i < QUARTERS; i++) {
    cout << "Please enter quarter " << i + 1 << "sales: $";
    cin >> arr[i];
  }
  Sales tmp(arr, QUARTERS);
  *this = tmp;
}

void SALES::Sales::show() const {
  for (int i = 0; i < QUARTERS; i++) {
    cout << "quarter " << i + 1 << " sales: $" << sales[i] << std::endl;
  }
  cout << "average sales: $" << average << std::endl;
  cout << "maximum sales: $" << max << std::endl;
  cout << "minimum sales: $" << min << std::endl;
}