#include "Wymierne.h"

  Wymierne::Wymierne()
: _numerator(0), _denominator(1){}

Wymierne::Wymierne(int num)
: _numerator(num), _denominator(1){}

Wymierne::Wymierne(int num, int denom)
: _numerator(num), _denominator(denom){
  if(_denominator == 0){
    _denominator = 1;
  }
}

Wymierne::operator double() const{
  double num = static_cast<double>(_numerator);
  double denom = static_cast<double>(_denominator);
  return num / denom;
}

void Wymierne::Print(string sampleText){
  cout << sampleText;
  if(_denominator == 1){
    cout << _numerator << endl;
  } else {
    cout << _numerator << "/" << _denominator << endl;
  }
}

Wymierne Wymierne::Pomnoz(const Wymierne & w1, const Wymierne & w2){
  Wymierne elem(w1._numerator * w2._numerator, w1._denominator * w2._denominator);
  return elem;
}


Wymierne Dodaj (const Wymierne & w1, const Wymierne & w2){
  Wymierne elem(w1._numerator * w2._denominator + w2._numerator * w1._denominator, w2._denominator * w1._denominator);
  return elem;
}