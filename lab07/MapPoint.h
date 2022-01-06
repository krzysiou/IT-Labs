#pragma once
#include <iostream>
#include <cmath>

using namespace std;

class MapPoint {
  public:
    MapPoint();
    MapPoint(const char *, double, double);
    MapPoint(const char *, double, const char, double, const char);
    void print() const;
    void movePoint(const double, const double);
    MapPoint & closestFrom(MapPoint *, MapPoint *);
    char * getName() const;
    double getLat();
    double getLon();
    void setName(const char *);
    void setLon(double);
    void setLat(double);
    ~MapPoint();
  private:
    char * name;
    double longitude;
    double latitude;
};

MapPoint inTheMiddle(MapPoint *, MapPoint *, const char *);
char calculateLon(double);
char calculateLat(double);