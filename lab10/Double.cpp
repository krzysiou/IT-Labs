#include "Double.h"


Double::Double(double val)
: _val(val){}

Double::Double(wymierne::Wymierne w)
: _val(static_cast<double>(w)){}

void Double::setx(Double d) const{
    _val = d._val;
}

double Double::getX() const{
    return _val;
}

void Double::print() const{
    cout << "Print nr " << "." << "Val = " << _val << endl;
}

void print(Double d){
    cout << "Print nr " << "." << "Val = " << d.getX() << endl;
}
Double Dodaj(Double d1, Double d2){
    Double elem(d1.getX() + d2.getX());
    return elem;
}