#include "Functors.h"

//DIVISIBLE BY
DivisibleBy::DivisibleBy(int val){
  _pivot = val;
}

bool DivisibleBy::operator ()(int arg){
  return arg % _pivot == 0;
}

//GREATER THAN
GreaterThan::GreaterThan(int val){
  _pivot = val;
}

bool GreaterThan::operator ()(int val){
  return val > _pivot;
}