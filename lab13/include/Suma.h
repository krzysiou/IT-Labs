#pragma once
#include "Algo.h"

//child class
class Suma : public Algo {
    public:
        //overrides function wykonaj from parent class and squares Argumenty object values
        Argumenty wykonaj(Argumenty x) const {
            double sum = 0;
            for(int i = 0; i < x._args.size(); i++){
                sum += x._args[i];
            }
            Argumenty temp(1);
            temp(0, sum);
            return temp;
        }
        //overrides function sklonuj from parent class and clones object
        //clones by creating new object because object does not store data
        //if sklonuj returned this then there would be double frees
        Suma * sklonuj(){
            return new Suma;
        }
};