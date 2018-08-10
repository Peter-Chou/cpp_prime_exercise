// candy bar structure
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
  CandyBar snack = {"Mocha Munch", 2.3, 350};
  show(snack);
  cin.get();
  return 0;
}

void show(const CandyBar& s) {
  cout << "snack is " << s.name << " which is " << s.weight << "weight and "
       << s.calory << "calories." << endl;
}