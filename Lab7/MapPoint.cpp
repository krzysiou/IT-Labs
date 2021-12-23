#include "MapPoint.h"
#include <cstring>
#include <cmath>
#include "MapDist.h"

MapPoint::MapPoint(){
  this->name = new char[strlen("Punkt") + 1];
  strcpy(this->name, "Punkt");
  this->longitude = 0;
  this->latitude = 0;
}
MapPoint::MapPoint(const char * str, double lon, double lat){
  this->name = new char[strlen(str) + 1];
  strcpy(this->name, str);
  this->longitude = lon;
  this->latitude = lat;
}
MapPoint::MapPoint(const char * str, double lon, const char letter1, double lat, const char letter2){
  this->name = new char[strlen(str) + 1];
  strcpy(this->name, str);
  if(letter1 == 'W'){
    this->longitude = (-1)*lon;
  } else{
    this->longitude = lon;
  }
  if(letter2 == 'S'){
    this->latitude = (-1)*lat;
  } else{
    this->latitude = lat;
  }
}
void MapPoint::print() const{
  cout<<"Wspolrzedne dla " << this->name << ": " << abs(this->longitude) << calculateLon(this->longitude) << ", " << abs(this->latitude) << calculateLat(this->latitude) << endl;
}

void MapPoint::movePoint(const double lonShift, const double LatShift){
  this->longitude += lonShift;
  this->latitude += LatShift;
}

MapPoint & MapPoint::closestFrom(MapPoint * pt1, MapPoint * pt2){
  MapDist dist1(*this, *pt1);
  MapDist dist2(*this, *pt2);
  if(dist1.angularDistance() > dist2.angularDistance()){
    return * pt2;
  } else {
    return * pt1;
  }
}
char * MapPoint::getName() const{
  return this->name;
}
double MapPoint::getLat(){
  return this->latitude;
}
double MapPoint::getLon(){
  return this->longitude;
}

MapPoint::~MapPoint(){
  cout<< "Usuwanie " << this->name<< endl;
  delete [] this->name;
}

char calculateLon(double lon){
  if(lon > 0){
    return 'E';
  } else {
    return 'W';
  }
}

char calculateLat(double lat){
  if(lat > 0){
    return 'N';
  } else {
    return 'S';
  }
}

void MapPoint::setName(const char * str){
  delete [] this->name;
  this->name = new char [strlen(str)+1];
  strcpy(this->name, str);
}

void MapPoint::setLon(double lon){
  this->longitude = lon;
}
void MapPoint::setLat(double lat){
  this->latitude = lat;
}

MapPoint inTheMiddle(MapPoint * pt1, MapPoint * pt2, const char * str){
  MapPoint temp;
  temp.setName(str);
  temp.setLat((pt1->getLat() + pt2->getLat())/2);
  temp.setLon((pt1->getLon() + pt2->getLon())/2);
  return temp;
}