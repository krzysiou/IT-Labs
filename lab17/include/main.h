#pragma once
#include <iostream>
#include <math.h>

#include "Abstract.h"
#include "Structure.h"
#include "Shape.h"

//Abstract classes: Drawable (objects that can be drawn), Transformable (objects that can be shifted), ClosedShape (objects that have area)
//Shapes: Circle (child after Drawable, Transformabe, ClosedShape), Deltoid (child after Drawable, Transformabe, ClosedShape)
//Structures: Point (child after Drawable, Transformable), Section (child after Drawable, Transformable)

//standalone function to draw objects
void draw(Drawable * prop){
  prop->draw();
}