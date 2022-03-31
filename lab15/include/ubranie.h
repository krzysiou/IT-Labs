#include "main.h"

class KoszulaBawelniana : public Ubranie {
  public:
    KoszulaBawelniana(int, int);
    void SkrocRekawy();
    void Wypisz() const;
};

class KoszulaJedwabna : public Ubranie {
    public:
      KoszulaJedwabna(int, int);
      void Wypisz() const;
};

class SpodnieBawelniane : public Ubranie {
    public:
      SpodnieBawelniane(int);
      void PrasujKanty(Zelazko);
      void Wypisz();
    private:
    bool _kantyWyprasowane;
};


class SpodnieJedwabne : public Ubranie {
    public:
      SpodnieJedwabne(int);
      void PrasujKanty(Zelazko);
      void Wypisz();
    private:
      bool _kantyWyprasowane;
};