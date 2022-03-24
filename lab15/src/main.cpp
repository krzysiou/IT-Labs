#include "main.h"

void Zelazko::UstawTemperature(int temperatura){
  if(_zakres >= temperatura) _temperatura = temperatura;
  else cout << "Ten model nie obsluguje takiego zakresu temperatur." << endl;
}

void Zelazko::Wypisz() const{
   cout<< _nazwa << " Cena: "<< _cena <<" temperatura: "<< _temperatura <<"\n";
}

int Zelazko::Temperatura(){
  return _temperatura;
}

void Ubranie::Prasuj(Zelazko zelazko){
  if(_wyprasowane == true) cout << "---Ubranie nie wymaga prasowania." << endl;
  else if(zelazko.Temperatura() <= _zakres && _wyprasowane == false){
    _wyprasowane = true;
    cout << "---Prasuje " << _nazwa << " zelazkiem o temp. " << zelazko.Temperatura() <<endl;
  }
  else cout << "Zelazko za gorace" << endl; 
}

void Ubranie::Wypisz(){
  string state = _wyprasowane ? "Wyprasowane" : "Pogniecione";
  cout << _nazwa << " Cena: " << _cena << ". " << state;
}

void Ubranie::Pogniec(){
  if(_wyprasowane) _wyprasowane = false;
}