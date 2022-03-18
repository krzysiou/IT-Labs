#include "FilterCriteria.h"

void FilterCriteria::add(function<bool(int)> func){
  _criteria.push_back(func);
}

int FilterCriteria::size(){
  return _criteria.size();
}

function<bool(int)> FilterCriteria::get(int id){
  return _criteria[id];
}