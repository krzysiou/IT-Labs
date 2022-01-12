#pragma once
#include <iostream>
#include <math.h>

using namespace std;

//LINEAR

class Linear {
  public:
    Linear(double x, double y): _x(x), _y(y) {};
    double operator()(double x) const;
    double getx() const {return _x;};
    double gety() const {return _y;};
  private:
    double _x;
    double _y;
};

ostream& operator<<(ostream&, const Linear);

//POW

class Pow {
  public:
    Pow(double n = 2): _n(n) {};
    double operator()(double x) const;
    double getn() const {return _n;};
  private:
    double _n;
};

ostream& operator<<(ostream&, const Pow);

//ABS

class Abs {
  public:
    double operator()(double x) const;
};

class Cos {
  public:
    Cos(const double x, const double y): _x(x), _y(y) {};
    double operator()(double x) const;
  private:
    double _x;
    double _y;
};