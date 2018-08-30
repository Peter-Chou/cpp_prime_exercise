#include <string>

#ifndef BANK_H_
#define BANK_H_

class Bank {
 private:
  std::string name;
  std::string account;
  double balance;

 public:
  Bank();
  Bank(const char*, const char*, double);
  bool deposit(double);
  bool withdraw(double);
  void display();
};

#endif  // ! BANK_H_