#include "Zespolone.h"

namespace zespolone{

    Zespolone::Zespolone(double val)
    : _re(val), _im(0){}

    Zespolone::Zespolone(double val1, double val2)
    : _re(val1), _im(val2){}

    Zespolone::Zespolone(wymierne::Wymierne w)
    : _re(static_cast<double>(w)), _im(0){}

    Zespolone::Zespolone(const Zespolone & toCopy)
    : Zespolone(toCopy._re, toCopy._im){}

    Zespolone::Zespolone(Zespolone && toMove)
    : _re(exchange(toMove._re, 0)), _im(exchange(toMove._im, 0)){}

    double Zespolone::getRe() const{
        return _re;
    }

    double Zespolone::getIm() const{
        return _im;
    }

    void Zespolone::Print(string sampleText) const{
        cout << sampleText;
        if(_im == 0){
            cout << _re << endl;
        } else {
            cout << _re << " + " << _im << "i" << endl;
        }
    }

    Zespolone Dodaj(Zespolone z1, Zespolone z2){
        Zespolone elem(z1.getRe() + z2.getRe(), z1.getIm() + z2.getIm());
        return elem;
    }

}