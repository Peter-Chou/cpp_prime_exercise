#include <iostream>

void show_menu();

using namespace std;

int main() {
  char ch;
  bool correct;
  show_menu();
  cin >> ch;
  do {
    switch (ch) {
      case 'c':
        cout << "hello carnivore";
        correct = true;
        break;
      case 'p':
        cout << "hello pianist";
        correct = true;
        break;
      case 't':
        cout << "hello tree";
        correct = true;
        break;
      case 'g':
        cout << "hello game";
        correct = true;
        break;
      default:
        cout << "Please enter one c, p, t or g: ";
        cin >> ch;
    }
  } while (!correct);
  cin.get();
  return 0;
}

void show_menu() {
  cout << "Please enter one of the following choices:\n";
  cout << "c) carnivore\t\t\tp) pianist\n"
       << "t) tree\t\t\t\tg) game\n";
}
