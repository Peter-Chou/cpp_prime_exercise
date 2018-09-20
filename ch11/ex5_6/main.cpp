#include <iostream>
#include "stonewt.h"

int main() {
  Stonewt s1(52.5);
  Stonewt s2(1, 1.2);
  std::cout << "s1 + s2 = " << s1 + s2 << std::endl;
  std::cout << "s1 - s2 = " << s1 - s2 << std::endl;
  Stonewt s3 = 5 * s1;
  std::cout << "5 * s1 = " << s3 << std::endl;
  s3.toStn();
  std::cout << "5 * s1 = " << s3 << std::endl;
  std::cout << "initialize stonewt list.\n";
  Stonewt arr[6] = {13.4, 25.6, 45.7};
  arr[3] = s1;
  arr[4] = s2;
  arr[5] = s3;
  Stonewt* max_wt = arr;
  Stonewt* min_wt = arr;
  int count = 0;
  std::cout << "list 0:" << arr[0] << "\t";
  for (int i = 1; i < 6; i++) {
    if (arr[i] > arr[i - 1]) {
      max_wt = arr + i;
    } else if (arr[i] < arr[i - 1]) {
      min_wt = arr + i;
    }
    if (arr[i] >= Stonewt(11, 0.0)) {
      ++count;
    }
    arr[i].toPos();
    std::cout << "list " << i << ": " << arr[i] << "\t";
    if (i == 2) std::cout << std::endl;
  }
  std::cout << std::endl;
  std::cout << "max: " << *max_wt << std::endl;
  std::cout << "min: " << *min_wt << std::endl;
  std::cout << "nums over 11 stones: " << count << std::endl;

  return 0;
}