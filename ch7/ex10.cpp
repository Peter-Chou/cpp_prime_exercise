#include <iostream>

using namespace std;

double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double calculate(double a, double b, double (*pf)(double, double));

int main() {
  // initialize pf as an array of three function pointers
  double a, b;
  double (*pf[3])(double, double) = {add, subtract, multiply};
  cout << "please enter two numbers (q to quit) :\n";
  while (cin >> a >> b) {
    cout << a << " + " << b << " = " << calculate(a, b, pf[0]) << endl;
    cout << a << " - " << b << " = " << calculate(a, b, pf[1]) << endl;
    cout << a << " * " << b << " = " << calculate(a, b, pf[2]) << endl << endl;

    cout << "please enter another two numbers (q to quit) :\n";
  }
  cout << "Bye!";
  cin.get();
  return 0;
}

double calculate(double a, double b, double (*pf)(double, double)) {
  return pf(a, b);
}

double add(double a, double b) { return a + b; }

double subtract(double a, double b) { return a - b; }

double multiply(double a, double b) { return a * b; }