// fill / show / reverse the array
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

const unsigned arr_capacity = 10;

void fill_array(vector<double>& arr);
void show_array(const vector<double>& arr);
void reverse_array(vector<double>& arr);

int main() {
  vector<double> vals;
  fill_array(vals);
  show_array(vals);
  reverse_array(vals);
  cout << "After reverse:\n";
  show_array(vals);
}

void fill_array(vector<double>& arr) {
  double tmp;
  for (int i = 0; i < arr_capacity; i++) {
    cout << "Please enter value: ";
    if (cin >> tmp) {
      arr.push_back(tmp);
    } else {
      break;
    }
  }
}

void show_array(const vector<double>& arr) {
  for (int i = 0; i < arr.size(); i++) {
    cout << arr.at(i) << endl;
  }
}

void reverse_array(vector<double>& arr) { reverse(arr.begin(), arr.end()); }
