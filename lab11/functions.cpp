#include "functions.h"

//LINEAR

ostream& operator<<(ostream& stream, Linear l){
  if(l.gety() > 0) cout << l.getx() << "*x+" << l.gety() << endl;
  if(l.gety() <= 0) cout << l.getx() << "*x" << l.gety() << endl;
  return stream;
}

double Linear::operator()(double x) const {
  return _x * x + _y;
}

//POW

ostream& operator<<(ostream& stream, const Pow p){
  cout << "x^" << p.getn() << endl;
  return stream;
}

double Pow::operator()(double x) const {
  return pow(x, _n);
}


//ABS

double Abs::operator()(double x) const {
  return abs(x);
}

//COS

double Cos::operator()(double x) const {
  return cos(_x * x + _y);
}