#include <string>

#ifndef STACK_USER_H_
#define STACK_USER_H_

struct customer {
  std::string fullname;
  double payment;
};

typedef customer Item;

class Stack {
 private:
  static const int capacity = 5;
  Item arr[capacity];
  int top;

 public:
  Stack();
  bool isempty() const { return top == 0; }
  bool isfull() const { return top == capacity; }
  bool push(const Item&);
  bool pop(Item&);
};

#endif  // ! STACK_USER_H_