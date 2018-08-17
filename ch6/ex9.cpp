#include <cstdlib>
#include <deque>
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

static ifstream inFile;
static ofstream outFile;
const string filename = "contributors.txt";
const string outName = "ex9_output.txt";

struct patron {
  string name;
  double donation;
};

const double GRAND = 10000;
void set_array(patron* arr, const int len);
void display(const patron* arr, const int len, bool saveToFile = false);

int main() {
  int arr_len;
  inFile.open(filename);
  if (!inFile.is_open()) {
    cout << "Can't open file:" << filename << endl;
    exit(EXIT_FAILURE);
  }
  inFile >> arr_len;
  inFile.get();
  inFile.get();
  patron* patrons = new patron[arr_len];
  set_array(patrons, arr_len);
  inFile.close();

  outFile.open(outName);
  display(patrons, arr_len, true);
  outFile.close();
  cin.get();
  return 0;
}

void set_array(patron* arr, const int len) {
  for (int i = 0; i < len; i++) {
    // cout << "please enter the patron(" << i + 1 << ")'s name: \n";
    getline(inFile, arr[i].name);
    // cout << "please enter the patron(" << i + 1 << ")'s contribution: \n";
    inFile >> arr[i].donation;
    inFile.get();
    inFile.get();
  }
}

void display(const patron* arr, const int len, bool saveToFile) {
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

  if (saveToFile) {  // save to file if true
    outFile << "Grand Patrons:\n";
    for (int i = 0; i < len; i++) {
      if (arr[i].donation >= GRAND) {
        outFile << "Name: " << arr[i].name << "\t\tdonated: $"
                << arr[i].donation << endl;
      }
    }
    outFile << "Patrons:\n";
    if (dq.size() > 0) {
      for (int i = 0; i < dq.size(); i++) {
        outFile << "Name: " << dq[i].name << "\t\tdonated: $" << dq[i].donation
                << endl;
      }
    } else {
      outFile << "None\n";
    }
  }
}