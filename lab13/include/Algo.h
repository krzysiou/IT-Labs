#pragma once
#include "Argumenty.h"

class Algo {
  public:
    virtual Argumenty wykonaj(Argumenty a) const {
      return a;
    }
    virtual Algo * sklonuj(){
      return new Algo;
    }
};