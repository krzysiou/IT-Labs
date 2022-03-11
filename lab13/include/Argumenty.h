#pragma once
#include <iostream>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

class Argumenty {
    //befriend classes
    friend class Suma;
    friend class Pierwiastek;
    public:
        //creates vector with size of given value
        Argumenty(int);
        //overrides operator () to insert values into _args vector by providing (index, number)
        Argumenty & operator ()(int, double);
        //print vector _args using cout
        void print(string);
        //print vector _args using given ostream
        void print(string, ostream &);
    private:
        //vector _args which holds arguments
        vector<double> _args;
};