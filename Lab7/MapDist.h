#include <iostream>
#include <cmath>
#include "MapPoint.h"

class MapDist{
  public:
    MapDist(MapPoint &, MapPoint &);
    double getlongitude() const;
    double getlatitude() const;
    double angularDistance () const;
    void setLat(double);
    void setLon(double);
  private:
    double distLongitude;
    double distLatitude;
};

MapDist distance(MapPoint &, MapPoint &);