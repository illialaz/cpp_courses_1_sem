#include <iostream>
#include "complex.h"
using namespace std;

int main(void) {
  Complex c1(1.2, 3), c2(5, 6), c3;
  Complex sum;
  cout << c1 << endl;
  cout << c2 << endl;
  c1.setRe(-8);
  cout << c1 << endl;
  cout << (c1 == c2) << endl;
  sum = c1 + c2 + c3;
  cout << sum << endl;

  return 0;
}
