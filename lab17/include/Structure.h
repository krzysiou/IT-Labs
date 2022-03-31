#pragma once
#include "main.h"

//class that shapes and other structures are built with
class Point : public Drawable, public Transformable {
  public:
    //constructor
    Point(double x, double y) : _x(x), _y(y){};
    //overload operator <<
    friend std::ostream& operator<<(std::ostream& os, const Point point){
        point.draw();
        return os;
    }
    //get _x
    double getX() const {
      return _x;
    }
    //get _y
    double getY() const {
      return _y;
    }
    //draw point
    void draw() const {
      std::cout << "(" << getX() << ", " << getY() << ")";
    }
    //shift point
    void shift(double x, double y){
      _x += x;
      _y += y;
    }
  private:
    double _x;
    double _y;
};

//class built with points that some shapes are built with
class Section : public Drawable, public Transformable {
  public:
    //constructor
    Section(Point a, Point b) : _a(a), _b(b) {}
    //get point _a
    Point getA(){
      return _a;
    }
    //get pont _b
    Point getB(){
      return _b;
    }
    //shift section
    void shift(double x, double y){
        _a.shift(x, y);
        _b.shift(x, y);
    }
    //get length of section
    double length(){
        return sqrt((pow(_b.getX() - _a.getX(), 2) + pow(_b.getY() - _a.getY(), 2)));
    }
    //draw section
    void draw() const {
        std::cout << "Rysujemy odcinek od " << _a << " do " << _b << std::endl;
    }
  private:
    Point _a;
    Point _b;
};