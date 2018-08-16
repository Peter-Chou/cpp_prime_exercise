#include <iostream>

const double firstLevel = 5000.;
const double secondLevel = 15000.;
const double rate_1 = 0.1;
const double thirdLevel = 35000.;
const double rate_2 = 0.15;
const double rate_3 = 0.2;

using namespace std;

bool valid_salary(double& sa);
void get_show_tax(const double& sa);

int main() {
  double salary;
  cout << "Please enter your salary: $ ";
  while (valid_salary(salary)) {
    get_show_tax(salary);
    cout << "Please enter your salary: $ ";
  }
  cin.get();
  return 0;
}

bool valid_salary(double& sa) {
  if (!(cin >> sa && sa >= 0)) {
    return false;
  } else {
    return true;
  }
}

void get_show_tax(const double& sa) {
  double tax;
  if (sa <= firstLevel) {
    tax = 0;
  } else if (sa <= secondLevel) {
    tax = (sa - firstLevel) * rate_1;
  } else if (sa <= thirdLevel) {
    tax = (secondLevel - firstLevel) * rate_1 + (sa - secondLevel) * rate_2;
  } else {
    tax = (thirdLevel - secondLevel) * rate_2 +
          (secondLevel - firstLevel) * rate_1 + (sa - thirdLevel) * rate_3;
  }
  cout << "your salary: $" << sa << endl
       << " your tax: $" << tax << endl
       << "tax rate: " << (tax / sa) * 100 << "%\n";
}