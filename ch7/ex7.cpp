#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

const int Max = 5;

double* fill_array(double* a, double* b);
void show_array(const double* a, const double* b);
void revalue(double r, double* a, const double* b);

int main() {
  double properties[Max];
  double* last_item = fill_array(properties, properties + Max);
  show_array(properties, last_item);
  if (last_item != properties) {
    cout << "Enter revaluation factor: ";
    double factor;
    while (!(cin >> factor)) {
      cin.clear();
      while (cin.get() != '\n') {
        continue;
      }
      cout << "bad input; please enter a number: ";
    }
    revalue(factor, properties, last_item);
    show_array(properties, last_item);
  }
  cout << "Done.\n";
  cin.get();
  return 0;
}

double* fill_array(double* a, double* b) {
  int i = 1;
  double* it;
  for (it = a; it != b; ++it) {
    cout << "Enter value #" << i << ": ";
    if (cin >> *it) {
      i++;
    } else {
      cin.clear();
      while (cin.get() != '\n') {
        continue;
      }
      cout << "bad input, input process terminated.\n";
      return it;
    }
  }
  return it;
}

void show_array(const double* a, const double* b) {
  for (auto it = a; it != b; ++it) {
    cout << "value: " << *it << endl;
  }
}

void revalue(double r, double* a, const double* b) {
  for (double* it = a; it != b; ++it) {
    *it = *it * r;
  }
}