#include <cctype>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {
  string fileName;
  ifstream inFile;
  char ch;
  static unsigned int total;
  cout << "Please enter the file you want to open: ";
  getline(cin, fileName);
  inFile.open(fileName);
  if (!inFile.is_open()) {  // terminating if failed to open file
    cout << "Cound not open the file" << fileName << endl;
    cout << "Program terminating.\n";
    exit(EXIT_FAILURE);
  }
  while (inFile >> ch) {
    if (isalpha(ch)) {
      total++;
    }
  }
  inFile.close();
  cout << "There are " << total << " characters in this file.\n";
  cin.get();
  return 0;
}