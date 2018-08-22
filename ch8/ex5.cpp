// template max function for numbers
#include <iostream>

template <typename T>
T max5(T[]);

using namespace std;

int main() {
  int int_array[5] = {1, 3, 2, 5, 4};
  double dou_array[5] = {1.2, 3.4, 5.5, 2.2, 10.7};
  cout << "int max: " << max5(int_array) << endl;
  cout << "double max: " << max5(dou_array) << endl;
  cin.get();
  return 0;
}

template <typename T>
T max5(T* arr) {
  T tmp = arr[0];
  for (int i = 1; i < 5; i++) {
    if (tmp < arr[i]) {
      tmp = arr[i];
    }
  }
  return tmp;
}