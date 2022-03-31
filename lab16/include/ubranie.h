#pragma once
#include "zelazko.h"

//Parent class for Spodnie and Koszula
class Ubranie : public Przedmiot {
    public:
        //set _wyprasowane to true
        void Prasuj(Zelazko);
        //print Ubranie
        void Wypisz() const;
        //set _wyprasowane to false
        void Pogniec();
    protected:
        bool _wyprasowane;
};

//Parent class for KoszulaJedwabna and KoszulaBawelniana
class Koszula : public Ubranie {
    public:
        //print Koszula
        void Wypisz() const;
        //set _rekaw to false
        void SkrocRekawy();
    protected:
        bool _rekaw;
};

class KoszulaJedwabna : public Koszula {
    public:
        //basic constructor
        KoszulaJedwabna(int cena, int rekaw){
            _cena = cena;
            _nazwa = "Koszula jedwabna";
            _zakres = 3;
            _wyprasowane = false;
            if(rekaw == 1) _rekaw = true;
            else _rekaw = false;
        }
};

class KoszulaBawelniana : public Koszula {
    public:
        //basic constructor
        KoszulaBawelniana(int cena, int rekaw){
            _cena = cena;
            _nazwa = "Koszula bawelniana";
            _zakres = 7;
            _wyprasowane = false;
            if(rekaw == 1) _rekaw = true;
            else _rekaw = false;
        }
};

//Parent class for SpodnieJedwabne and SpodnieBawelniane
class Spodnie : public Ubranie {
    public:
        //set _kanty to true
        void PrasujKanty(Zelazko);
        //print Spodnie
        void Wypisz() const;
    protected:
        bool _kanty;
};

class SpodnieJedwabne : public Spodnie {
    public:
        //basic constructor
        SpodnieJedwabne(int cena){
            _cena = cena;
            _nazwa = "Spodnie jedwabne";
            _zakres = 3;
            _wyprasowane = false;
            _kanty = false;
        };
};

class SpodnieBawelniane: public Spodnie {
    public:
        //basic constructor
        SpodnieBawelniane(int cena){
            _cena = cena;
            _nazwa = "Spodnie bawelniane";
            _zakres = 7;
            _wyprasowane = false;
            _kanty = false;
        };
};