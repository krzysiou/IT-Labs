#pragma once
#include "main.h"

//macro that will help calculate values
#define PI 3.14

//class representing circle
class Circle : public Drawable, public Transformable, public ClosedShape {
  public:
    //constructor
    Circle(Point center, double radius) : _center(center), _radius(radius) {};
    //shift circle
    void shift(double x, double y){
      _center.shift(x, y);
    }
    //draw circle
    void draw() const {
        std::cout << "Rysujemy kolo o srodku " << _center << " i promieniu " << _radius << std::endl;
    }
    //calculate area of circle
    double area() const {
        return PI * pow(_radius, 2);
    }
    //calculate length of circle
    double length(){
      return 2 * PI * _radius;
    }
  private:
    Point _center;
    double _radius;
};

//class representing deltoid
class Deltoid : public Drawable, public Transformable, public ClosedShape {
  public:
    //constructor using sections
    Deltoid(Section s1, Section s2) : _a(s1.getA()), _b(s2.getA()), _c(s1.getB()), _d(s2.getB()) {};
    //constructor using points
    Deltoid(Point p1, Point p2, Point p3, Point p4) : _a(p1), _b(p2), _c(p3), _d(p4) {};
    //calculate length of deltoid
    double length() {
      double d1 = sqrt((pow(_b.getX() - _a.getX(), 2) + pow(_b.getY() - _a.getY(), 2)));
      double d2 = sqrt((pow(_c.getX() - _b.getX(), 2) + pow(_c.getY() - _b.getY(), 2)));
      double d3 = sqrt((pow(_d.getX() - _c.getX(), 2) + pow(_d.getY() - _c.getY(), 2)));
      double d4 = sqrt((pow(_a.getX() - _d.getX(), 2) + pow(_a.getY() - _d.getY(), 2)));
      return d1 + d2 + d3 + d4;
    }
    //calculate area of deltoid
    double area() const {
      double d1 = sqrt((pow(_c.getX() - _a.getX(), 2) + pow(_c.getY() - _a.getY(), 2)));
      double d2 = sqrt((pow(_b.getX() - _d.getX(), 2) + pow(_b.getY() - _d.getY(), 2)));
      return d1 * d2;
    }
    //draw deltoid
    void draw() const {
        std::cout << "Rysujemy deltoid o wierzcholkach ";
        _a.draw();
        std::cout << ", ";
        _b.draw();
        std::cout << ", ";
        _c.draw();
        std::cout << ", ";
        _d.draw();
        std::cout << "\n";
    }
    //shift deltoid
    void shift(double x, double y) {
        _a.shift(x, y);
        _b.shift(x, y);
        _c.shift(x, y);
        _d.shift(x, y);
    }
  private:
    Point _a;
    Point _b;
    Point _c;
    Point _d;
};