// array of candy bar structure
#include <iostream>
#include <string>

using namespace std;

struct CandyBar {
  string name;
  double weight;
  int calory;
};

void show(const CandyBar& s);

int main() {
  CandyBar snack[3] = {
      {"Mocha Munch", 2.3, 350}, {"Chocolate", 1.1, 200}, {"Muse", 5.5, 300}};
  // show(snack);
  for (int i = 0; i < 3; i++) {
    show(snack[i]);
  }
  cin.get();
  return 0;
}

void show(const CandyBar& s) {
  cout << "snack is " << s.name << " which is " << s.weight << " weight and "
       << s.calory << " calories." << endl;
}