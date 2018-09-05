#include <iostream>
#include "list.h"

template class ListBad<double>;

template <typename U>
void square(U& item);

int main() {
  double d_arr[] = {1.1, 2.2, 3.3};
  std::cout << "initialize list with 1.1, 2.2, 3.3\n";
  ListBad<double> l1(d_arr, 3);
  // ListBad<double> l1;
  std::cout << l1 << std::endl;
  std::cout << "add 4.5 to list:\n";
  l1.push(4.5);
  std::cout << l1 << std::endl;
  std::cout << "add 5.5 to list:\n";
  l1.push(5.5);
  std::cout << l1 << std::endl;
  if (l1.full()) std::cout << "list is full\n";
  std::cout << "pop out an item from the list:\n";
  l1.pop();
  std::cout << l1 << std::endl;
  std::cout << "pop out an item from the list:\n";
  l1.pop();
  std::cout << l1 << std::endl;
  std::cout << "use square funtion element wise:\n";
  l1.visit(square);
  std::cout << l1 << std::endl;
  std::cin.get();
  return 0;
}

template <typename U>
void square(U& item) {
  item *= item;
}