#pragma once
#include "Abstract.h"

class Primitive : public Abstract {
  public:
    Primitive(double val) : _val(val) {};
    void Set(double val) { _val = val; };
    double GetVal() const { return _val; };
    void Display() const { 
      std::cout << _val; 
    };
    void PrintWithValue() const { 
      Display();
      std::cout << std::endl; 
    };
  private:
    double _val;
};