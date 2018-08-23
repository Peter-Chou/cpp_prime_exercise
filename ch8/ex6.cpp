#include <iostream>
#include <string>

using namespace std;

template <typename T>
T maxn(T* arr, int n);

template <>
string maxn<string>(string*, int n);

int main() {
  int int_arr[6] = {1, 2, 3, 4, 5, 6};
  double dou_arr[4] = {1.1, 2.2, 3.3, 4.4};
  string str_arr[5] = {"how long", "how old", "how are you", "where are you",
                       "there are six"};
  cout << "int max: " << maxn(int_arr, 6) << endl;
  cout << "double max: " << maxn(dou_arr, 4) << endl;
  cout << "string max: " << maxn(str_arr, 5) << endl;
  cin.get();
  return 0;
}

template <typename T>
T maxn(T* arr, int n) {
  T tmp = arr[0];
  for (int i = 1; i < n; i++) {
    if (tmp < arr[i]) {
      tmp = arr[i];
    }
  }
  return tmp;
}

template <>
string maxn<string>(string* arr, int n) {
  string tmp;
  for (int i = 1; i < n; i++) {
    if (tmp.size() < arr[i].size()) {
      tmp = arr[i];
    }
  }
  return tmp;
}