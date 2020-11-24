/*
 * Гордей Илья. 14 Группа
 * Лабораторная Fraction
 */
#include <iostream>
#include "fraction.h"
using namespace std;

int main() {
  //Демонстрация библиотеки

  //Создание объекта
  Fraction a(21, 10);
  //Вывод объекта в формате дроби
  cout << "Вывод объекта в формате дроби: " << a << endl;

  //Для вывода в формате double
  cout << "Вывод в формате double: " << a.GetFractionInDouble() << endl;

  //Get методы
  cout << "GetNumerator(): " << a.GetNumerator() << endl;
  cout << "GetDenumerator(): " << a.GetDenominator() << endl;

  //Set метод
  a.SetFraction(11, 23);
  cout << "Проверка set метода: " << a << endl;

  //Сложение дроби с дробью
  cout << "Сложение 3/11 с 21/22: " << Fraction(3, 11) + Fraction(21, 22) << endl;
  //Сложение дроби с числом
  cout << "Сложение 3/11 с 5: " << Fraction(3, 11) + 5 << endl;
  cout << "Сложение 5 с 3/11: " << 5 + Fraction(3, 11) << endl;

  //Умножение дроби на дробь
  cout << "Умножение 21/4 на 17/5: " << Fraction(21, 4) * Fraction(17, 5) << endl;
  //Умножение дроби на число
  cout << "Умножение 21/4 на 11: " << Fraction(21, 4) * 11 << endl;
  cout << "Умножение 11 на 21/4: " << 11 * Fraction(21, 4) << endl;

  //Деление дроби на дробь
  cout << "Деление 21/4 на 17/5: " << Fraction(21, 4) / Fraction(17, 5) << endl;
  //Деление дроби на число
  cout << "Деление 21/4 на 28: " << Fraction(21, 4) / 28 << endl;
  cout << "Деление 28 на 21/4: " << 28 / Fraction(21, 4) << endl;

  //Изменение знака дроби
  cout << "Изменеине знака дроби 3/11: " << -Fraction(3, 11) << endl;
  cout << "Изменеине знака дроби -9/22: " << -Fraction(-9, 22) << endl;

  //Операции сравнения дроби с дробью
  cout << "(Операция >): 21/2 > 23/2: " << (Fraction(21, 2) > Fraction(23, 2)) << endl;
  cout << "(Операция <): 21/2 < 23/2: " << (Fraction(21, 2) < Fraction(23, 2)) << endl;
  cout << "(Операция >=): 21/2 >= 23/2: " << (Fraction(21, 2) >= Fraction(23, 2)) << endl;
  cout << "(Операция <=): 21/2 <= 23/2: " << (Fraction(21, 2) <= Fraction(23, 2)) << endl;
  cout << "(Операция ==): 21/2 == 23/2: " << (Fraction(21, 2) == Fraction(23, 2)) << endl;
  cout << "(Операция !=): 21/2 != 23/2: " << (Fraction(21, 2) != Fraction(23, 2)) << endl;

  //Операции сравнения дроби с числом
  cout << "(Операция >): 21/2 > 11: " << (Fraction(21, 2) > 11) << endl;
  cout << "(Операция <): 21/2 < 11: " << (Fraction(21, 2) < 11) << endl;
  cout << "(Операция >=): 21/2 >= 11: " << (Fraction(21, 2) >= 11) << endl;
  cout << "(Операция <=): 21/2 <= 2: " << (Fraction(21, 2) <= 2) << endl;
  cout << "(Операция ==): 21/2 == 2: " << (Fraction(21, 2) == 2) << endl;
  cout << "(Операция !=): 21/2 != 2: " << (Fraction(21, 2) != 2) << endl;

  //Операции сравнения числа с дробью
  cout << "(Операция >): 11 > 21/2: " << (11 > Fraction(21, 2)) << endl;
  cout << "(Операция <): 11 < 21/2: " << (11 < Fraction(21, 2)) << endl;
  cout << "(Операция >=): 11 >= 21/2: " << (11 >= Fraction(21, 2)) << endl;
  cout << "(Операция <=): 11 <= 21/2: " << (11 <= Fraction(21, 2)) << endl;
  cout << "(Операция ==): 11 == 21/2: " << (11 == Fraction(21, 2)) << endl;
  cout << "(Операция !=): 11 != 21/2: " << (11 != Fraction(21, 2)) << endl;

}
