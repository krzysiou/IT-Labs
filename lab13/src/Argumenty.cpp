#include "Argumenty.h"

Argumenty::Argumenty(int size){
    _args.resize(size);
}

Argumenty & Argumenty::operator ()(int index, double number){
    _args[index] = number;
    return * this;
}

void Argumenty::print(string str){
    cout << str << " ";
    for(int i = 0; i < _args.size(); i++){
        cout << _args[i] << " ";
    }
    cout << endl;
}

void Argumenty::print(string str, ostream & out){
    out << str << " ";
    for(int i = 0; i < _args.size(); i++){
        out << _args[i] << " ";
    }
    out << endl;
}