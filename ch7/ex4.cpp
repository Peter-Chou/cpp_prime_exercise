#include <iostream>

using namespace std;

const unsigned int number = 47;
const unsigned int picks = 5;
const unsigned int mega = 27;

long double prob(unsigned int n, unsigned int p);

int main() {
  cout << "the chance of winning the lottery is: " << prob(number, picks);
  cin.get();
  return 0;
}

long double prob(unsigned int num, unsigned int picks) {
  long double chance = 1.0L;
  long n;
  unsigned p;
  for (n = num, p = picks; p > 0; n--, p--) {
    chance = chance * n / p;
  }
  return chance;
}