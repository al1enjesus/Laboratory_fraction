//
// Created by Il on 17.11.2020.
//

#include "fraction.h"
#include <algorithm>
#include <iostream>

Fraction::Fraction(long num, long denom) {
  numerator = num;
  denominator = denom;
  CheckAndSetupFraction();
}

long Fraction::GetDenominator() const {
  return this->denominator;
}
long Fraction::GetNumerator() const {
  return this->numerator;
}
void Fraction::GetFractionInDouble() const {
  
}


void Fraction::SetFraction(long num, long denom) {
  numerator = num;
  denominator = denom;
  CheckAndSetupFraction();
}

void Fraction::ReduceFraction() {
  long gcd = std::__gcd(numerator, denominator);
  numerator /= gcd;
  denominator /= gcd;
}

void Fraction::CheckAndSetupFraction() {
  if (numerator == 0){
    denominator = 1;
  }
  else{
    if (denominator == 0){
      throw "Denominator is zero!";
    }
    else {
      ReduceFraction();
      if (denominator < 0){
        numerator *= (-1);
        denominator *= (-1);
      }
    }
  }
}



void Fraction::ChangeSign() {
  numerator *= (-1);
}




