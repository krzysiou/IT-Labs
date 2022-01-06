#include "Wymierne.h"

namespace wymierne {
    Wymierne::Wymierne()
    : _numerator(0), _denominator(1){}

    Wymierne::Wymierne(int val)
    : _numerator(val), _denominator(1){}

    Wymierne::Wymierne(int val1, int val2)
    : _numerator(val1), _denominator(val2){
        if(_denominator == 0){
            _denominator = 1;
        }
    }

    int Wymierne::nwd(int m, int n) const{
        int oldm, oldn;
            while( m % n != 0 ){
                oldm = m;
                oldn = n;
            m = oldn;
            n = oldm % oldn;
        }
        return n;
    } 

    void Wymierne::Print(string sampleText) const{
        cout << sampleText;
        if(_denominator == 1){
            cout << _numerator << endl;
        } else {
            int biggestDivider = nwd(_numerator, _denominator);
            cout << _numerator/biggestDivider << "/" << _denominator/biggestDivider << endl;
        }
    }

    int Wymierne::getNumerator() const{
        return _numerator;
    }

    int Wymierne::getDenominator() const{
        return _denominator;
    }

    Wymierne::operator double() const{
        double val1 = static_cast<double>(_numerator);
        double val2 = static_cast<double>(_denominator);
        return val1/val2;
    }

    Wymierne Pomnoz(Wymierne w1, Wymierne w2){
        Wymierne elem(w1.getNumerator() * w2.getNumerator(), w1.getDenominator() * w2.getDenominator());
        return elem;
    }

    Wymierne Dodaj(Wymierne w1, Wymierne w2){
        Wymierne elem(w1.getNumerator() * w2.getDenominator() + w2.getNumerator() * w1.getDenominator(), w1.getDenominator() * w2.getDenominator());
        return elem;
    }
}