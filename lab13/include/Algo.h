#pragma once
#include "Argumenty.h"

//parent class
class Algo {
    public:
        //virtual function wykonaj which will be modified in child classes
        virtual Argumenty wykonaj(Argumenty x) const {
            return x;
        }
        //virtual function sklonuj which will be modified in child classes
        //clones by creating new object because object does not store data
        //if sklonuj returned this then there would be double frees
        virtual Algo * sklonuj(){
            return new Algo;
        }
};