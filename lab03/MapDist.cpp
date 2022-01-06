#include "MapDist.h"

//HELPER FUNCTIONS
double angularDistance(MapPoint * point1, MapPoint * point2){
  double dist1 = sqrt(pow(point1->longitude - point2->longitude, 2.0) + pow(point1->latitude - point2->latitude, 2.0));
  return dist1;
}

//MAIN FUNCTIONS
MapPoint closestFrom(MapPoint * ref, MapPoint * point1, MapPoint * point2){
  if(angularDistance(ref, point1) < angularDistance(ref, point2)){
    return *point1;
  } else {
    return *point2;
  }
}

MapPoint inTheMiddle(MapPoint * point1, MapPoint * point2, const char* name){
  double lonAVG = (point1->longitude + point2->longitude) / 2;
  double latAVG = (point1->latitude + point2->latitude) / 2;
  MapPoint result;
  result.name = name;
  result.longitude = lonAVG;
  result.latitude = latAVG;
  result.sideHorizontal = calculateLat(latAVG);
  result.sideVertical = calculateLon(lonAVG);
  return result;
}