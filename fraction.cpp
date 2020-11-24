//
// Created by Il on 17.11.2020.
//

#include "fraction.h"
#include <algorithm>

//region get, set
long Fraction::GetDenominator() const {
  return this->denominator;
}
long Fraction::GetNumerator() const {
  return this->numerator;
}
double Fraction::GetFractionInDouble() const {
  return (double) (this->numerator) / (double) (this->denominator);
}
void Fraction::SetFraction(long num, long denom) {
  this->numerator = num;
  this->denominator = denom;
  CheckAndSetupFraction();
}
Fraction::Fraction(long num, long denom) {
  SetFraction(num, denom);
}
//endregion
//region change_view
void Fraction::ReduceFraction() {
  long gcd = std::__gcd(this->numerator, this->denominator);
  this->numerator /= gcd;
  this->denominator /= gcd;
}
void Fraction::CheckAndSetupFraction() {
  if (this->numerator == 0){
    this->denominator = 1;
  }
  else{
    if (this->denominator == 0){
      throw "Denominator is zero!";
    }
    else {
      ReduceFraction();
      if (this->denominator < 0){
        this->numerator *= (-1);
        this->denominator *= (-1);
      }
    }
  }
}
//endregion

//region operations+
Fraction Fraction::operator+(const Fraction &other) const{
  long long new_numerator = this->numerator * other.denominator + this->denominator * other.numerator;
  long long new_denominator = this->denominator * other.denominator;
  return Fraction(new_numerator, new_denominator);
}
Fraction Fraction::operator+(long number) const {
  long long new_numerator = this->numerator + number * this->denominator;
  return Fraction(new_numerator, this->denominator);
}
Fraction operator+(long number, Fraction f) {
  return f.operator+(number);
}
//endregion
//region operations-
Fraction Fraction::operator-(const Fraction &other) const {
 long long new_numerator = this->numerator * other.denominator - this->denominator * other.numerator;
 long long new_denominator = this->denominator * other.denominator;
 return Fraction(new_numerator, new_denominator);
}
Fraction Fraction::operator-(long number) const {
  long long new_numerator = this->numerator - number * this->denominator;
  return Fraction(new_numerator, this->denominator);
}
Fraction operator-(long number, Fraction f) {
  return  f.operator-(number);
}
//endregion
//region operations*
Fraction Fraction::operator*(const Fraction &other) const {
  long long new_numerator = this->numerator * other.numerator;
  long long new_denominator = this->denominator * other.denominator;
  return Fraction(new_numerator, new_denominator);
}
Fraction Fraction::operator*(long number) const {
  long long new_numerator = this->numerator * number;
  return Fraction(new_numerator, this->denominator);
}
Fraction operator*(long number, Fraction f){
  return f.operator*(number);
}
//endregion
//region operations/
Fraction Fraction::operator/(const Fraction &other) const {
  if (other.numerator == 0){
    throw "Dividing by zero!";
  }
  long long new_numerator = this->numerator * other.denominator;
  long long new_denominator = this->denominator * other.numerator;
  return Fraction(new_numerator, new_denominator);
}
Fraction Fraction::operator/(long number) const {
  if (number == 0){
    throw "Dividing by zero!";
  }
  long long new_denominator = this->denominator * number;
  return Fraction(this->numerator, new_denominator);
}
Fraction operator/(long number, Fraction f){
  if (f.numerator == 0){
    throw "Dividing by zero!";
  }
  long long new_numerator = number * f.denominator;
  long long new_denominator = f.numerator;
  return Fraction(new_numerator, new_denominator);
}
//endregion
//region unominus
Fraction Fraction::operator-() const {
  return Fraction(-(this->numerator), this->denominator);
}
//endregion

//region compare
bool Fraction::operator>(const Fraction &other) const {
  return (long long) this->numerator * other.denominator > (long long) other.numerator * this->denominator;
}
bool Fraction::operator<(const Fraction &other) const {
  return (long long) this->numerator * other.denominator < (long long) other.numerator * this->denominator;
}
bool Fraction::operator>=(const Fraction &other) const {
  return (long long) this->numerator * other.denominator >= (long long) other.numerator * this->denominator;
}
bool Fraction::operator<=(const Fraction &other) const {
  return (long long) this->numerator * other.denominator <= (long long) other.numerator * this->denominator;
}
bool Fraction::operator==(const Fraction &other) const {
  return (long long) this->numerator * other.denominator == (long long) other.numerator * this->denominator;
}
bool Fraction::operator!=(const Fraction &other) const {
  return (long long) this->numerator * other.denominator != (long long) other.numerator * this->denominator;
}

bool Fraction::operator>(int number) const {
  return (long long) this->numerator > (long long) this->denominator * number;
}
bool Fraction::operator<(int number) const {
  return (long long) this->numerator < (long long) this->denominator * number;
}
bool Fraction::operator>=(int number) const {
  return (long long) this->numerator >= (long long) this->denominator * number;
}
bool Fraction::operator<=(int number) const {
  return (long long) this->numerator <= (long long) this->denominator * number;
}
bool Fraction::operator==(int number) const {
  return (long long) this->numerator == (long long) this->denominator * number;
}
bool Fraction::operator!=(int number) const {
  return (long long) this->numerator != (long long) this->denominator * number;
}

bool operator>(long number, const Fraction &f) {
  return f.operator<(number);
}
bool operator<(long number, const Fraction &f) {
  return f.operator>(number);
}
bool operator>=(long number, const Fraction &f) {
  return f.operator<=(number);
}
bool operator<=(long number, const Fraction &f) {
  return f.operator>=(number);
}
bool operator==(long number, const Fraction &f) {
  return f.operator==(number);
}
bool operator!=(long number, const Fraction &f) {
  return f.operator!=(number);
}
Fraction Fraction::operator=(const long & other) {
  return Fraction(other, 1);
}
//endregion

//region in and out
std::ostream &operator<<(std::ostream &out, const Fraction &number) {
  return out  << number.numerator << "/" << number.denominator;
}

//region destroy
Fraction::~Fraction(void) = default;
//endregion