#pragma once
#include <iostream>
#include <cstring>
#include "Wymierne.h"

class Double{
    public:
        ///constructor
        Double(double);
        ///constructor converting Wymierne to Double
        Double(wymierne::Wymierne);
        ///set _val value
        void setx(Double) const;
        ///get _val value
        double getX() const;
        ///print _val
        void print() const;
        ///counter counting prints
        static int counter;
    private:
        /// _val that hold double
        mutable double _val;
};

///print Double
void print(Double);
///adds two Doubles and returns Double
Double Dodaj(Double, Double);