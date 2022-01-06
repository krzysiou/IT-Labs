#pragma once
#include <iostream>
#include <cstring>

using namespace std;

namespace wymierne{
    class Wymierne{
        public:
            ///constructor
            Wymierne();
            ///explicit constructor 
            explicit Wymierne(int);
            ///constructor
            Wymierne(int, int);
            ///print Wymierne
            void Print(string) const;
            ///get numerator
            int getNumerator() const;
            ///get_denominator
            int getDenominator() const;
            ///convert to double
            operator double() const;
            ///biggest divider
            int nwd(int n, int m) const;
        private:
         ///numerator
         int _numerator;
         ///denominator
         int _denominator;
    };
    ///multiply two Wymierne return Wymierne
    Wymierne Pomnoz(Wymierne, Wymierne);
    ///Add two Wymierne return Wymierne
    Wymierne Dodaj(Wymierne, Wymierne);
}