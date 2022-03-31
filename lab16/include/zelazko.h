#pragma once
#include "main.h"

//Parent class fot ZelazkoPhilips and ZelazkoTefal
class Zelazko : public Przedmiot {
    public:
        //set _temperatura
        void UstawTemperature(int);
        //print Zelazko
        void Wypisz() const;
        //return _temperatura
        int zwrocTemperature();
    protected:
        int _temperatura;
};

class ZelazkoPhilips : public Zelazko {
    public:
        //basic constructor
        ZelazkoPhilips(int cena){
            _cena = cena;
            _nazwa = "Philips";
            _temperatura = 0;
            _zakres = 5;
        };
};

class ZelazkoTefal : public Zelazko {
    public:
        //basic constructor
        ZelazkoTefal(int cena){
            _cena = cena;
            _nazwa = "Tefal";
            _temperatura = 0;
            _zakres = 7;
        };
};