#include "MapDist.h"

MapDist::MapDist(MapPoint & pt1, MapPoint & pt2){
  this->distLatitude = (abs(pt1.getLat() - pt2.getLat()));
  this->distLongitude = (abs(pt1.getLon() - pt2.getLon()));
}
double MapDist::getlongitude() const{
  return this->distLongitude;
}
double MapDist::getlatitude() const{
  return this->distLatitude;
}
double MapDist::angularDistance () const{
  return (sqrt(pow(this->distLatitude, 2) + pow(this->distLongitude,2)));
}

void MapDist::setLat(double lat){
  this->distLatitude = lat;
}

void MapDist::setLon(double lon){
  this->distLongitude = lon;
}

MapDist distance(MapPoint & pt1, MapPoint & pt2){
  MapDist tmp(pt1, pt2);
  return tmp;
}
