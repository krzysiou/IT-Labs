#pragma once
#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

class Wymierne {
  friend Wymierne Dodaj(const Wymierne &, const Wymierne &);
  public:
    Wymierne();
    explicit Wymierne(int);
    Wymierne(int, int);
    operator double() const;
    void Print(string);
    static Wymierne Pomnoz(const Wymierne &, const Wymierne &);
  private:
  int _numerator;
  int _denominator;
};
Wymierne Dodaj(const Wymierne &, const Wymierne &);