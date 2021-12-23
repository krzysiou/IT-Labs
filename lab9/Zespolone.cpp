#include "Zespolone.h"

Zespolone::Zespolone(double realis)
: _re(realis), _im(0){}

Zespolone::Zespolone(double realis, double imaginaris)
: _re(realis), _im(imaginaris){}

Zespolone::Zespolone(Wymierne w1)
: _re(static_cast<double>(w1)), _im(0){}

Zespolone::Zespolone(const Zespolone & toCopy)
: _re(toCopy._re), _im(toCopy._im){}

Zespolone::Zespolone(Zespolone && toMove)
: _re(), _im(){
  //uzywam manualnej podmiany bo exchange mi nie dziala z jakiegos powodu
  _re = toMove._re;
  _im = toMove._im;
  toMove._re = 0;
  toMove._im = 0;
}

void Zespolone::Print(string sampleText){
 cout << sampleText << "(" << _re << "," << _im << ")" << endl;
}

Zespolone Dodaj (const Zespolone & z1, const Zespolone & z2){
  Zespolone elem(z1._re + z2._re, z1._im + z2._im);
  return elem;
}