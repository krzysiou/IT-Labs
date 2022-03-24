#include "zelazko.h"

ZelazkoPhilips::ZelazkoPhilips(int cena){
  _cena = cena;
  _temperatura = 0;
  _zakres = 5;
  _nazwa = "Philips";
}

ZelazkoTefal::ZelazkoTefal(int cena){
  _cena = cena;
  _temperatura = 0;
  _zakres = 7;
  _nazwa = "Tefal";
}

void ZelazkoTefal::Wypisz() const{
  cout<< _nazwa << " Cena: "<< _cena <<" Temperatura: "<< _temperatura << " Zakres: " << _zakres << endl;
}