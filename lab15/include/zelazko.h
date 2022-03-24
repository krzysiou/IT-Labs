#include "main.h"

class ZelazkoPhilips : public Zelazko {
  public:
    ZelazkoPhilips(int);
};

class ZelazkoTefal : public Zelazko {
  public:
    ZelazkoTefal(int);
    void Wypisz() const;
};