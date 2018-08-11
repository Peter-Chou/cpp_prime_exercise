// using new method
#include <iostream>
#include <string>

using namespace std;

struct pizza {
  string name;
  double diameter;
  double weight;
};

void set_info(pizza* i);
void display(const pizza* i);

int main() {
  pizza* item1 = new pizza;
  set_info(item1);
  display(item1);
  delete item1;
  cin.get();
  return 0;
}

void set_info(pizza* i) {
  cout << "Enter the type of the pizza:\n";
  getline(cin, i->name);
  cout << "Enter the diameter of the pizza:\n";
  cin >> i->diameter;
  cout << "Enter the weight of the pizza:\n";
  cin >> i->weight;
}

void display(const pizza* i) {
  cout << "the type of the pizza: " << i->name << endl
       << "diameter: " << i->diameter << endl
       << "weight: " << i->weight << endl;
}
