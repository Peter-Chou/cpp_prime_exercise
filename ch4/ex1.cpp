// store a student information
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;

struct student {
  std::string f_name;
  std::string l_name;
  char up_grade;
  int age;
};

student& set_info(student& s);
void show(const student& s);

int main() {
  student stu;
  show(set_info(stu));
  cin.get();
  return 0;
}

student& set_info(student& s) {
  cout << "what is your first name? ";
  std::getline(cin, s.f_name);
  cout << "what is your last name? ";
  std::getline(cin, s.l_name);
  cout << "what letter grade do you deserve? ";
  cin >> s.up_grade;
  cout << "what is your age? ";
  cin >> s.age;
  return s;
}

void show(const student& s) {
  cout << "Name: " << s.l_name << ", " << s.f_name << endl;
  cout << "Grade: " << static_cast<char>(s.up_grade + 1) << endl;
  cout << "Age: " << s.age;
}