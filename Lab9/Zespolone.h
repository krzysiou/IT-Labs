#pragma once
#include <iostream>
#include <cmath>
#include <cstring>
#include <utility>
#include "Wymierne.h"

using namespace std;

class Zespolone {
  friend Zespolone Dodaj(const Zespolone &, const Zespolone &);
  public:
    Zespolone(double);
    Zespolone(double, double);
    explicit Zespolone(Wymierne);
    Zespolone(const Zespolone &);
    Zespolone(Zespolone &&);
    void Print(string);
  private:
  double _re;
  double _im;
};

Zespolone Dodaj (const Zespolone &, const Zespolone &);