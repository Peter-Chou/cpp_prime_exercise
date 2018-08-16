#include <iostream>
#include <string>

using namespace std;

struct bop {
  string full_name;
  string title;
  string bopname;
  int preference;
};
const int ArrLen = 3;
const int validLen = 5;
const char valid[validLen] = {'a', 'b', 'c', 'd', 'q'};

void display(const bop*);

int main() {
  bop vips[ArrLen] = {{"Wimp Macho", "computer engineer", "bop1", 0},
                      {"Raki Rhodes", "junior programmer", "bop2", 1},
                      {"Celia Laiter", "AI engineer", "bop3", 2}};
  display(vips);
  cout << "Bye!";
  cin.get();
  return 0;
}

void show_choice() {
  cout << "Benevolent Order of Programmers Report\n"
       << "a. display by name\t\t\tb. display by title\n"
       << "c. display by bopname\t\td. display by preference\n"
       << "q. quit\n";
}

void show_name(const bop* arr) {
  for (int i = 0; i < ArrLen; i++) {
    cout << arr[i].full_name << endl;
  }
}

void show_title(const bop* arr) {
  for (int i = 0; i < ArrLen; i++) {
    cout << arr[i].title << endl;
  }
}

void show_bopname(const bop* arr) {
  for (int i = 0; i < ArrLen; i++) {
    cout << arr[i].bopname << endl;
  }
}

void show_preference(const bop* arr) {
  for (int i = 0; i < ArrLen; i++) {
    switch (arr[i].preference) {
      case 0:
        cout << arr[i].full_name << endl;
        break;
      case 1:
        cout << arr[i].title << endl;
        break;
      case 2:
        cout << arr[i].bopname << endl;
        break;
    }
  }
}

void choose(char& c) {
  cout << "enter your choice: ";
  cin >> c;
}

void display(const bop* arr) {
  char ch;
  show_choice();
  cin >> ch;
  while (ch != 'q') {
    switch (ch) {
      case 'a':
        show_name(arr);
        choose(ch);
        break;
      case 'b':
        show_title(arr);
        choose(ch);
        break;
      case 'c':
        show_bopname(arr);
        choose(ch);
        break;
      case 'd':
        show_preference(arr);
        choose(ch);
        break;
      default:
        while (cin.get() != '\n') {
          continue;
        }
        cout << "must enter one a, b, c, d, q: ";
        cin >> ch;
    }
  }
}