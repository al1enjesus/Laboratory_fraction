#include <iostream>
#include "fraction.h"
using namespace std;

int main() {
  Fraction f(21, -42);
  cout << f.GetNumerator() << " " << f.GetDenominator() << endl;
  f.SetFraction(81, 18);
  cout << f.GetNumerator() << " " << f.GetDenominator() << endl;

  Fraction b(-92, -44);

}
