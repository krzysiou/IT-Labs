#pragma once
#include <iostream>
#include <cmath>
#include <vector>
#include <cstring>

using namespace std;

class Argumenty {
  friend class Suma;
  friend class Pierwiastek;
  public:
    Argumenty(int);
    Argumenty& operator ()(int, double);
    void print(const string) const;
    void print(const string, ostream &);
  private:
    vector<double> _args;
};