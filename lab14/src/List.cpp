#include "List.h"

void List::insert(int val){
  _elems.push_back(val);
}

int & List::operator [](int id){
  return _elems[id];
}

void List::print(string txt) const {
  cout << txt << "  [ ";
  for(int i = 0; i < _elems.size(); i++){
    cout << _elems[i] << " ";
  }
  cout << "]" << endl;
}

List List::filter(function<bool(int)> func){
  List result;
  for(int i = 0; i < _elems.size(); i++){
    if(func(_elems[i])) result.insert(_elems[i]);
  }
  return result;
}

void List::print() const {
  cout << "[ ";
  for(int i = 0; i < _elems.size(); i++){
    cout << _elems[i] << " ";
  }
  cout << "]" << endl;
}