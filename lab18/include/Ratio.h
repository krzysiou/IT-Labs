#pragma once
#include "Abstract.h"

class Ratio : public Abstract {
  public:
    Ratio(Abstract & val1, Abstract & val2) : _val1(val1), _val2(val2) {};
    double GetVal() const { return _val1.GetVal() / _val2.GetVal(); };
    void Display() const { 
      std::cout << "("; 
      _val1.Display(); 
      std::cout << "/"; 
      _val2.Display();
      std::cout << ")"; 
    };
    void PrintWithValue() const {
      Display();
      std::cout << " = " << GetVal() << std::endl; 
    };
  private:
    Abstract & _val1;
    Abstract & _val2;
};