#pragma once
#include "MapPoint.h"
#include <cmath>

using namespace std;

//HELPER FUNCTIONS
double angularDistance(MapPoint *, MapPoint *);

//MAIN FUNCTIONS
MapPoint closestFrom(MapPoint *, MapPoint *, MapPoint *);
MapPoint inTheMiddle(MapPoint *, MapPoint *, const char *);
