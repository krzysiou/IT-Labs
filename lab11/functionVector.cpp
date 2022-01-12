#include "functionVector.h"

//FUNCTIONVECTOR

void FunctionVector::operator+=(function <double(double)> f){
  _funcs.push_back(f);
}

double FunctionVector::eval(double x){
  double tmp;
  for(int i = 0; i < _funcs.size(); i++){
    tmp = _funcs[i](x);
    x = tmp;
    _results.push_back(x);
  }
  return x;
}

double FunctionVector::operator[](int x){
  return _results[x];
}


void FunctionVector::clear(){
  _funcs.clear();
  _results.clear();
}