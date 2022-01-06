#pragma once
#include <iostream>
#include <cstring>
#include <utility>
#include "Wymierne.h"
using namespace std;

namespace zespolone{
    class Zespolone{
        public:
            ///constructor
            Zespolone(double);
            ///constructor
            Zespolone(double, double);
            ///converting constructor from Wymierne t oZespolone
            Zespolone(wymierne::Wymierne);
            ///copy constructor
            Zespolone(const Zespolone &);
            ///move constructor
            Zespolone(Zespolone &&);
            ///get realis
            double getRe() const;
            ///get imaginaris
            double getIm() const;
            ///print Zespolone
            void Print(string) const;
        private:
            ///realis
            double _re;
            ///imaginaris
            double _im;
    };
    /// add two Zespolone return Zespolone
    Zespolone Dodaj(Zespolone, Zespolone);
}