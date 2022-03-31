#include "zelazko.h"

//ZELAZKO

void Zelazko::UstawTemperature(int temperatura){
    if(temperatura <= _zakres) _temperatura = temperatura;
    else cout << "Ten model nie obsluguje takiego zakresu temperatur" << endl;
}

void Zelazko::Wypisz() const{
    cout << _nazwa << " cena: " << _cena << ". Temperatura: " << _temperatura << endl;
}

int Zelazko::zwrocTemperature(){
    return _temperatura;
}
