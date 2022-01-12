#pragma once
#include <iostream>
#include <math.h>
#include <vector>
#include <functional>

using namespace std;

class FunctionVector {
  public:
    void operator+=(function <double(double)>);
    double operator[](int);
    double eval(double);
    void clear();
  private:
    vector <function <double(double)> > _funcs;
    vector <double> _results;
};