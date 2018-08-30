#include <iostream>
#include "bank.h"

using namespace std;

int main() {
  Bank test("test account", "123456", 5000);
  test.display();
  std::cout << std::endl;
  std::cout << "Attempting to deposit $-500\n";
  test.deposit(-500);
  test.display();
  std::cout << std::endl;
  std::cout << "Attempting to deposit $500\n";
  test.deposit(500);
  test.display();
  std::cout << std::endl;
  std::cout << "Attempting to withdraw $10000\n";
  test.withdraw(10000);
  test.display();
  std::cout << std::endl;
  std::cout << "Attempting to withdraw $1000\n";
  test.withdraw(1000);
  test.display();
  cin.get();
  return 0;
}