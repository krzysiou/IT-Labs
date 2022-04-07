#pragma once
#include <iostream>

class Abstract {
  public:
    virtual void Display() const {
      return;
    };
    virtual void PrintWithValue() const{
      return;
    };
    virtual double GetVal() const{
      return 0;
    };
};