#include "stack.h"

Stack::Stack() : top(0) {}

bool Stack::push(const Item& item) {
  if (top++ < capacity) {
    arr[top] = item;
    return true;
  } else {
    return false;
  }
}

bool Stack::pop(Item& item) {
  if (top > 0) {
    item = arr[--top];
    return true;
  } else {
    return false;
  }
}