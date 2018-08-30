#include "bank.h"
#include <iostream>

Bank::Bank() {
  name = "None";
  account = "None";
  balance = 0.0;
}

Bank::Bank(const char* n, const char* a, double num) {
  name = n;
  account = a;
  balance = num;
}

bool Bank::deposit(double num) {
  if (num < 0.0) {
    std::cout << "can't deposit money can't be negative\n";
    return false;
  }
  balance += num;
  return true;
}

bool Bank::withdraw(double num) {
  if (num < 0.0) {
    std::cout << "can't deposit money can't be negative\n";
    return false;
  } else if (num > balance) {
    std::cout << "you only have $" << balance << ", can't withdraw $" << num
              << std::endl;
    return false;
  } else {
    balance -= num;
    return true;
  }
}

void Bank::display() {
  std::cout << "customer's name: " << name << std::endl;
  std::cout << "customer's account: " << account << std::endl;
  std::cout << "customer's balance: " << balance << std::endl;
}