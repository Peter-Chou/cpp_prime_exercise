// array of candy bar structure
#include <iostream>
#include <string>

using namespace std;

struct CandyBar {
  string name;
  double weight;
  int calory;
};

void show(const CandyBar* s);

int main() {
  CandyBar* snacks = new CandyBar[3];
  snacks[0] = {"Mocha Munch", 2.3, 350};
  snacks[1] = {"Chocolate", 1.1, 200};
  snacks[2] = {"Muse", 5.5, 300};
  // show(snack);
  for (int i = 0; i < 3; i++) {
    show(&snacks[i]);
  }
  delete[] snacks;
  cin.get();
  return 0;
}

void show(const CandyBar* s) {
  cout << "snack is " << s->name << " which is " << s->weight << " weight and "
       << s->calory << " calories." << endl;
}