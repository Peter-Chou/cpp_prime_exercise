#include <deque>
#include <iostream>
#include <string>

using namespace std;

struct patron {
  string name;
  double donation;
};

const double GRAND = 10000;
void set_array(patron* arr, const int len);
void display(const patron* arr, const int len);

int main() {
  int arr_len;
  cout << "enter the number of contributors to store: ";
  cin >> arr_len;
  cin.get();
  patron* patrons = new patron[arr_len];
  set_array(patrons, arr_len);
  display(patrons, arr_len);
  cin.get();
  return 0;
}

void set_array(patron* arr, const int len) {
  for (int i = 0; i < len; i++) {
    cout << "please enter the patron(" << i + 1 << ")'s name: \n";
    getline(cin, arr[i].name);
    cout << "please enter the patron(" << i + 1 << ")'s contribution: \n";
    cin >> arr[i].donation;
    cin.get();
  }
}
void display(const patron* arr, const int len) {
  deque<patron> dq;
  cout << "Grand Patrons:\n";
  for (int i = 0; i < len; i++) {
    if (arr[i].donation >= GRAND) {
      cout << "Name: " << arr[i].name << "\t\tdonated: $" << arr[i].donation
           << endl;
    } else {
      dq.push_back(arr[i]);
    }
  }
  cout << "Patrons:\n";
  if (dq.size() > 0) {
    for (int i = 0; i < dq.size(); i++) {
      cout << "Name: " << dq[i].name << "\t\tdonated: $" << dq[i].donation
           << endl;
    }
  } else {
    cout << "None\n";
  }
}