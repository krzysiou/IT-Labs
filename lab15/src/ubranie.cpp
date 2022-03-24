#include "ubranie.h"

KoszulaBawelniana::KoszulaBawelniana(int cena, int rekaw){
  _cena = cena;
  if(rekaw == 1) _rekaw = true;
  else _rekaw = false;
  _zakres = 7;
  _nazwa = "Koszula bawelniania";
  _wyprasowane = false;
}

void KoszulaBawelniana::SkrocRekawy(){
  _rekaw = false;
}

void KoszulaBawelniana::Wypisz() const {
  string state = _wyprasowane ? "Wyprasowane" : "Pogniecione";
  string rekawState = _rekaw ? "Dlugi rekaw" : "Krotki rekaw";
  cout << _nazwa << " Cena: " << _cena << ". " << state << ". " << rekawState << endl;
}

KoszulaJedwabna::KoszulaJedwabna(int cena, int rekaw){
  _cena = cena;
  if(rekaw == 1) _rekaw = true;
  else _rekaw = false;
  _zakres = 3;
  _nazwa = "Koszula jedwabna";
  _wyprasowane = false;
}

void KoszulaJedwabna::Wypisz() const {
  string state = _wyprasowane ? "Wyprasowane" : "Pogniecione";
  string rekawState = _rekaw == 1 ? "Dlugi rekaw" : "Krotki rekaw";
  cout << _nazwa << " Cena: " << _cena << ". " << state << ". " << rekawState << endl;
}

SpodnieBawelniane::SpodnieBawelniane(int cena){
  _cena = cena;
  _nazwa = "Spodnie bawelniane";
  _zakres = 7;
  _wyprasowane = false;
  _kantyWyprasowane = false;
}

void SpodnieBawelniane::PrasujKanty(Zelazko zelazko){
  if(_kantyWyprasowane == true) cout << "Ubranie ma kanty." << endl;
  else if(zelazko.Temperatura() <= _zakres && _kantyWyprasowane == false){
    _kantyWyprasowane = true;
    cout << "---Prasuje " << _nazwa << " zelazkiem o temp. " << zelazko.Temperatura() <<endl;
  }
  else cout << "Zelazko za gorace" << endl; 
}

void SpodnieBawelniane::Wypisz(){
    string state = _wyprasowane ? "Wyprasowane" : "Pogniecione";
    string kantyState = _kantyWyprasowane ? "Kanty" : "Brak kantow";
    cout << _nazwa << " Cena: " << _cena << ". " << state << ".  "<< kantyState << endl;
}

SpodnieJedwabne::SpodnieJedwabne(int cena){
  _cena = cena;
  _nazwa = "Spodnie jedwabne";
  _zakres = 3;
  _kantyWyprasowane = false;
  _wyprasowane = false;
}

void SpodnieJedwabne::PrasujKanty(Zelazko zelazko){
  if(_kantyWyprasowane == true) cout << "Ubranie ma kanty." << endl;
  else if(zelazko.Temperatura() <= _zakres && _kantyWyprasowane == false){
    _kantyWyprasowane = true;
    cout << "---Prasuje " << _nazwa << " zelazkiem o temp. " << zelazko.Temperatura() <<endl;
  }
  else cout << "Zelazko za gorace" << endl; 
}

void SpodnieJedwabne::Wypisz(){
    string state = _wyprasowane ? "Wyprasowane" : "Pogniecione";
    string kantyState = _kantyWyprasowane ? "Kanty" : "Brak kantow";
    cout << _nazwa << " Cena: " << _cena << ". " << state << ".  "<< kantyState << endl;
}