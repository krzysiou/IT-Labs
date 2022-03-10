#pragma once
#include <iostream>
#include "Algo.h"

class Pierwiastek : public Algo {
  public:
    Argumenty wykonaj(Argumenty a) const {
      for(int i = 0; i < a._args.size(); i++){
        a._args[i] = sqrt(a._args[i]);
      }
      return a;
    }
    Pierwiastek * sklonuj(){
      return new Pierwiastek;
    }
};