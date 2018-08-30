#include <iostream>
#include "person.h"

using namespace std;

int main() {
  Person one;
  Person two("Smythecraft");
  Person three("Dimwiddy", "Sam");
  cout << "person with no name:\n";
  one.Show();
  cout << endl;
  one.FormalShow();
  cout << endl << endl;
  cout << "person with last name:\n";
  two.Show();
  cout << endl;
  two.FormalShow();
  cout << endl << endl;
  cout << "person with first and last name:\n";
  three.Show();
  cout << endl;
  three.FormalShow();
  cin.get();
  return 0;
}