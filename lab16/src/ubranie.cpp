#include "ubranie.h"

//UBRANIE

void Ubranie::Prasuj(Zelazko zelazko){
    if(_wyprasowane == true) cout << "---Ubranie nie wymaga prasowania." << endl;
    else if(zelazko.zwrocTemperature() <= _zakres){
         _wyprasowane = true;
         cout << "---Prasuje " << _nazwa << " zelazkiem o temp. " << zelazko.zwrocTemperature() << endl;
    }
    else cout << "Zelazko za gorace." << endl;
}


void Ubranie::Wypisz() const {
  string state = _wyprasowane ? "Wyprasowane" : "Pogniecione";
  cout << _nazwa << " Cena: " << _cena << ". " << state;
}

void Ubranie::Pogniec(){
  if(_wyprasowane) _wyprasowane = false;
}

//KOSZULA

void Koszula::Wypisz() const {
    string dlugoscRekawa = _rekaw ? "Dlugi rekaw" : "Krotki rekaw";
    string pogniecione = _wyprasowane ? "Wyprasowane" : "Pogniecione";
    cout << _nazwa << " cena: " << _cena << ". " << pogniecione << ". " << dlugoscRekawa << "." <<endl;
}

void Koszula::SkrocRekawy() {
    _rekaw = false;
}

//SPODNIE

void Spodnie::PrasujKanty(Zelazko zelazko){
    if(_kanty == true) cout << "Ubranie ma kanty." << endl;
    else if(zelazko.zwrocTemperature() <= _zakres){
         _kanty = true;
         cout << "---Prasuje nogawki " << _nazwa << " zelazkiem o temp. " << zelazko.zwrocTemperature() << endl;
    }
    else cout << "Zelazko za gorace." << endl;
}
void Spodnie::Wypisz() const{
    string kanty = _kanty ? "Kanty" : "Brak kantow";
    string pogniecione = _wyprasowane ? "Wyprasowane" : "Pogniecione";
    cout << _nazwa << " cena: " << _cena << ". " << pogniecione << ". " << kanty << "." <<endl;
}