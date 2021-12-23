#include "MapPoint.h"

//HELPER FUNCTIONS
char calculateLat(double lat){
  char latSymbol;
  if(lat > 0){
    latSymbol = 'N';
  } else {
    latSymbol = 'S';
  }
  return latSymbol;
}

char calculateLon(double lon){
  char lonSymbol;
  if(lon > 0){
    lonSymbol = 'E';
  } else {
    lonSymbol = 'W';
  }
  return lonSymbol;
}

//MAIN FUNCTION
MapPoint * construct(const char* name, double lon, double lat){
  MapPoint * result = (MapPoint *)malloc(sizeof(MapPoint));
  result->name = name;
  result->longitude = lon;
  result->latitude = lat;
  result->sideVertical = calculateLon(lon);
  result->sideHorizontal = calculateLat(lat);
  return result;
}

void clear(MapPoint* mapPoint){
  cout << "Usuwanie " << mapPoint->name << endl;
  free(mapPoint);
}

void clear(MapPoint* mapPoint1, MapPoint* mapPoint2, MapPoint* mapPoint3){
  cout << "Usuwanie " << mapPoint1->name << endl;
  free(mapPoint1);
  cout << "Usuwanie " << mapPoint2->name << endl;
  free(mapPoint2);
  cout << "Usuwanie " << mapPoint3->name << endl;
  free(mapPoint3);
}

void print(const MapPoint * point){
  cout << "Wspolrzedne dla "<< point->name <<": "<<  abs(point->longitude) <<  point->sideVertical <<", " << abs(point->latitude) << point->sideHorizontal << endl;
}

void movePoint(MapPoint * point, double lonShift, double latShift){
  point->longitude += lonShift;
  point->latitude += latShift;
  point->sideVertical = calculateLon(point->longitude);
  point->sideHorizontal = calculateLat(point->latitude);
}