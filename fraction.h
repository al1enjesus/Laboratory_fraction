//
// Created by Il on 17.11.2020.
//
#include <iostream>

#ifndef FRACTION__FRACTION_H_
#define FRACTION__FRACTION_H_

class Fraction {
 public:
  //region get, set
  long GetNumerator() const;
  long GetDenominator() const;
  double GetFractionInDouble() const;
  void SetFraction(long numerator, long denominator);
  Fraction(long numerator = 0, long denominator = 1);
  //endregion

  //region operations+
  Fraction operator +(const Fraction & other) const;
  Fraction operator +(long number) const;
  friend Fraction operator +(long number, Fraction f);
  //endregion
  //region operations-
  Fraction operator -(const Fraction & other) const;
  Fraction operator -(long number) const;
  friend Fraction operator -(long number, Fraction f);
  //endregion
  //region operations*
  Fraction operator *(const Fraction & other) const;
  Fraction operator *(long number) const;
  friend Fraction operator *(long number, Fraction f);
  //endregion
  //region operations/
  Fraction operator /(const Fraction & other) const;
  Fraction operator /(long number) const;
  friend Fraction operator /(long number, Fraction f);
  //endregion
  //region unominus
  Fraction operator -() const;
  //endregion
  //region compare
  bool operator > (const Fraction& other) const;
  bool operator < (const Fraction& other) const;
  bool operator >= (const Fraction& other) const;
  bool operator <= (const Fraction& other) const;
  bool operator == (const Fraction& other) const;
  bool operator != (const Fraction& other) const;

  bool operator > (int number) const;
  bool operator < (int number) const;
  bool operator >= (int number) const;
  bool operator <= (int number) const;
  bool operator == (int number) const;
  bool operator != (int number) const;

  friend bool operator >(long number, const Fraction& f);
  friend bool operator <(long number, const Fraction& f);
  friend bool operator >=(long number, const Fraction& f);
  friend bool operator <=(long number, const Fraction& f);
  friend bool operator ==(long number, const Fraction& f);
  friend bool operator !=(long number, const Fraction& f);
  Fraction operator =(const long&);
  //endregion

  //region out
  friend std::ostream& operator << (std::ostream& out, const Fraction& number);
  //endregion

  //region destroy
  virtual ~Fraction(void);
  //endregion
 private:
  long numerator;
  long denominator;
  //region change_view
  void CheckAndSetupFraction();
  void ReduceFraction();
  //endregion
};

#endif //FRACTION__FRACTION_H_
