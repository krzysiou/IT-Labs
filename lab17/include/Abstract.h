#include "main.h"

//class for objects that can be drawn
class Drawable {
  public:
    //draw object
    virtual void draw() const {
      return;
    }
    //calculate length of object
    virtual double length(){
      return 0;
    }
};

//class for objects that can be shifted
class Transformable {
  public:
    //shift object
    virtual void shift(double, double) {
      return;
    }
};

//class for objects that have area
class ClosedShape {
  public:
    //calculate area
    virtual double area() const {
      return 0;
    }
};

