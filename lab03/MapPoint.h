#pragma once
#include <iostream>
#include <cmath>

using namespace std;

typedef struct MapPoint {
  const char* name;
  double longitude;
  double latitude;
  char sideHorizontal;
  char sideVertical;
} MapPoint;

//HELPER FUNCTIONS
char calculateLat(double);
char calculateLon(double);

//MAIN FUNCTIONS
MapPoint * construct(const char*, double, double);
void clear(MapPoint *);
void clear(MapPoint*, MapPoint*, MapPoint*);
void print(const MapPoint *);
void movePoint (MapPoint *, double, double);
