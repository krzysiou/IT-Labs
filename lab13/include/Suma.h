#pragma once
#include <iostream>
#include "Algo.h"

class Suma : public Algo {
  public:
    Argumenty wykonaj(Argumenty a) const {
      double sum = 0;
      for(int i = 0; i < a._args.size(); i++){
        sum += a._args[i];
      }
      Argumenty temp(1);
      temp(0, sum);
      return temp;
    }
    Suma * sklonuj(){
      return new Suma;
    }
};