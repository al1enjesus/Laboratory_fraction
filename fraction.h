//
// Created by Il on 17.11.2020.
//

#ifndef FRACTION__FRACTION_H_
#define FRACTION__FRACTION_H_

class Fraction {
 public:
  Fraction(long numerator, long denominator);
  long GetNumerator() const;
  long GetDenominator() const;
  void SetFraction(long numerator, long denominator);
  void CheckAndSetupFraction();
  void ReduceFraction();
  void ChangeSign();
  void GetFractionInDouble() const;

 private:
  long numerator;
  long denominator;

};

#endif //FRACTION__FRACTION_H_
