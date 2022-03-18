#pragma once
#include <vector>

using namespace std;

class FilterCriteria {
  public:
    void add(function<bool(int)>);
    int size();
    function<bool(int)> get(int);
  private:
    vector<function<bool(int)> > _criteria;
};