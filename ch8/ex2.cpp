#include <iostream>
#include <string>

using namespace std;

struct CandyBar {
  string name;
  double weight;
  unsigned calory;
};

void set_candy(CandyBar&, string a = "Millennium Munch", double b = 2.85,
               unsigned c = 350);
void show_candy(const CandyBar&);

int main() {
  CandyBar c;
  string a_name = "chocolate bar";
  double a_weight = 5.5;
  unsigned a_calo = 800;
  set_candy(c, a_name, a_weight, a_calo);
  show_candy(c);
  cin.get();
  return 0;
}

void set_candy(CandyBar& cb, string a, double b, unsigned c) {
  cb.name = a;
  cb.weight = b;
  cb.calory = c;
}
void show_candy(const CandyBar& c) {
  cout << "Candy name: " << c.name << endl;
  cout << "Candy weight: " << c.weight << endl;
  cout << "Candy calories: " << c.calory << endl;
}