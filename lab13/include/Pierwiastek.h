#pragma once
#include "Algo.h"

//child class
class Pierwiastek : public Algo {
    public:
        //overrides function wykonaj from parent class and sums all values in given Argumenty object
        Argumenty wykonaj(Argumenty x) const {
            for(int i = 0; i < x._args.size(); i++){
                x._args[i] = sqrt(x._args[i]);
            }
            return x;
        }
        //overrides function sklonuj from parent class and clones object
        //clones by creating new object because object does not store data
        //if sklonuj returned this then there would be double frees
        Pierwiastek * sklonuj(){
            return new Pierwiastek;
        }
};