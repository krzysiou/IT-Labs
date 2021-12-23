#pragma once
#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

class Vector2D {
  friend int main();
  friend Vector2D fun(Vector2D);
  public:
    //constructor with only name
    Vector2D(string);
    //constructor with name and params
    Vector2D(string, double, double);
    //destructor
    ~Vector2D();
    //function that clears object data
    void clear();
    //function that returns vector of given params in carthesian
    static Vector2D fromCarthesian(string, double, double);
    //function that returns vector of given params (without name) in carthesian (function overload)
    static Vector2D fromCarthesian(double, double);
    //function that returns vector of given params in carthesian from polar
    static Vector2D fromPolar(string, double, double);
    //function that prints vector contents
    void print(string) const;
    //function that multiplies two vectors and returns result
    double dot(const Vector2D &) const;
    //function that adds two vectors and returns new vector with computed values
    Vector2D add(const Vector2D &) const;
  private:
    static int count;
    string name;
    double x;
    double y;
    //constructor that copies contents from given object
    Vector2D(const Vector2D &);
    //constructor that moves contents from different objects and clears previous objects
    Vector2D(Vector2D &&);
};