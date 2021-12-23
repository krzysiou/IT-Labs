#include "Vector2D.h"

//starts enumeration of count
int Vector2D::count = 0;

Vector2D::Vector2D(string str)
: name(str), x(0), y(0)
{
  count++;
}

Vector2D::Vector2D(string str, double dim1, double dim2)
: name(str), x(dim1), y(dim2)
{
  count++;
}

Vector2D::Vector2D(const Vector2D & vec)
: name(vec.name), x(vec.x), y(vec.y)
{
    count++;
    cout << "--- kopiowanie " << name << "=(" << x << "," << y << ")"<<endl;
}

Vector2D::Vector2D(Vector2D && vec)
: name(move(vec.name)), x(move(vec.x)), y(move(vec.y))
{
    count++;
    cout << "--- przenoszenie " << name << "=(" << x << "," << y << ")"<<endl;
    vec.clear();
}

Vector2D::~Vector2D(){
  this->count--;
}

void Vector2D::clear(){
    this->name = "";
    this->x = 0;
    this->y = 0;
}

Vector2D Vector2D::fromCarthesian(string str, double dim1, double dim2){
  Vector2D elem(str, dim1, dim2);
  return elem;
}

Vector2D Vector2D::fromCarthesian(double dim1, double dim2){
  Vector2D elem("Vx", dim1, dim2);
  return elem;
}

Vector2D Vector2D::fromPolar(string str, double dim1, double dim2){
  double x = dim1*cos(dim2 * M_PI / 180.0);
  double y = dim1*sin(dim2 * M_PI / 180.0);
  Vector2D elem(str, x, y);
  return elem;
}

void Vector2D::print(string str) const{
  cout << str << this->name << "=(" << this->x << "," << this->y << ")" << endl;
}

double Vector2D::dot(const Vector2D & vec) const{
  return  (this->x)*(vec.x) + (this->y)*(vec.y);
}

Vector2D Vector2D::add(const Vector2D & vec) const{
  Vector2D elem("Vx", (this->x)+(vec.x), (this->y)+(vec.y));
  return elem;
}