#include "list.h"
#include <algorithm>

template <typename T>
ListBad<T>::ListBad() {
  _size = 0;
  _elem = new T[CAPACITY];
}

template <typename T>
ListBad<T>::ListBad(T* arr, int n) {
  for (int i = 0; i < std::min(n, CAPACITY); i++) {
    _elem[i] = arr[i];
    _size++;
  }
}

template <typename T>
ListBad<T>::~ListBad() {
  delete[] _elem;
}

template <typename T>
bool ListBad<T>::push(const T& item) {
  if (full()) {
    std::cout << "list full, can't push\n";
    return false;
  } else {
    _elem[++_size] = item;
    return true;
  }
}

template <typename T>
T& ListBad<T>::pop() {
  if (empty()) {
    std::cout << "list empty can't delete" << std::endl;
  } else {
    return _elem[--_size];
  }
}

template <typename T>
T& ListBad<T>::operator[](int n) const {
  return _elem[n];
}

template <typename T>
void ListBad<T>::visit(void (*pf)(T&)) {
  for (int i = 0; i < _size; i++) {
    pf(_elem[i]);
  }
}

template <typename T>
std::ostream& operator<<(std::ostream& os, ListBad<T>& item) {
  for (int i = 0; i < item._size; i++) {
    os << item._elem[i] << "\t";
  }
  return os;
}