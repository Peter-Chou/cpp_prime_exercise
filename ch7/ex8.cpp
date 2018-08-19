#include <iostream>

using namespace std;

const int seasons = 4;
const char snames[seasons][10] = {"Spring", "Summer", "Fall", "Winter"};

void fill(double* arr);
void show(const double* arr);

int main() {
  double expenses[seasons];
  fill(expenses);
  show(expenses);
  cin.get();
  return 0;
}

void fill(double* arr) {
  for (int i = 0; i < seasons; i++) {
    cout << "Enter " << snames[i] << " expenses: ";
    cin >> arr[i];  // 这里是问题点
  }
}
void show(const double* arr) {
  double total = 0.0;

  for (int i = 0; i < seasons; i++) {
    cout << snames[i] << ": $" << arr[i] << endl;
    total += arr[i];
  }
  cout << "Total Expenses: $" << total << endl;
}