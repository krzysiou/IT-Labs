#pragma once
#include <string>
#include <iostream>

using namespace std;

class Zelazko {
  public:
    void UstawTemperature(int);
    virtual void Wypisz() const;
    int Temperatura();
  protected:
    int _cena;
    int _temperatura;
    int _zakres;
    string _nazwa;

};

class Ubranie{   
    public:
      void Prasuj(Zelazko);
      void Wypisz();
      void Pogniec();
    protected:
      int _cena;
      bool _wyprasowane;
      int _zakres;
      string _nazwa;
      bool _rekaw;
};