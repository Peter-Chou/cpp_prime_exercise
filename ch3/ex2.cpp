// report BMI of your body
#include <iostream>
#include <cmath>

const int FOOT2INT = 12;
const double INCH2METER = 0.0254;
const double POUND2KILO = 2.2;

int main() {
  using std::cin;
  using std::cout;
  using std::endl;
  int feet, inch, total_inch, pound;
  double meters, kilogram, bmi;
  cout << "please enter your feet(integer): \n";
  cin >> feet;
  cout << "please enter your inch(integer): \n";
  cin >> inch;
  cout << "please enter your pound(integer): \n";
  cin >> pound;
  total_inch = feet * FOOT2INT + inch;
  meters = total_inch * INCH2METER;
  kilogram = pound / POUND2KILO;
  bmi = kilogram / std::pow(meters, 2);
  cout << "you are " << meters << " meters tall.\n";
  cout << kilogram << " kilograms heavy.\n";
  cout << "your BMI index: " << bmi << endl;
  cin.get();
  return 0;
}
