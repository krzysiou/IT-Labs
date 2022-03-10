#include "Argumenty.h"

Argumenty::Argumenty(int x){
  _args.resize(x);
}

Argumenty& Argumenty::operator ()(int x, double y){
  _args[x] = y;
  return *this;
}

void Argumenty::print(string str) const{
  cout << str << "  ";
  for(int i = 0; i < _args.size(); i++){
    cout << _args[i] << " ";
  }
  cout << endl;
}

void Argumenty::print(const string str, ostream & out){
    out << str << " ";
    for(int i = 0; i < _args.size(); i++){
      out << _args[i] << "  ";
    }
    out << endl;
}