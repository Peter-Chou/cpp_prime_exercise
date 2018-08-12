#include <iostream>
#include <string>

using namespace std;

struct car {
  string maker;
  int year;
};

int main() {
  int count;
  cout << "How many cars to catalog? ";
  cin >> count;
  cin.get();
  car* cars = new car[count];
  for (int i = 1; i <= count; i++) {
    cout << "Car #" << i << ":\n";
    cout << "Please enter the make: ";
    getline(cin, cars[i - 1].maker);
    cout << "Please enter the year made: ";
    cin >> cars[i - 1].year;
    cin.get();
  }
  cout << "Here is your collection:\n";
  for (int i = 0; i < count; i++) {
    cout << cars[i].year << " " << cars[i].maker << endl;
  }
  cin.get();
  return 0;
}
