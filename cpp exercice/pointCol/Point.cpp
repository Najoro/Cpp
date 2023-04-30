#include <iostream>
#include "Point.hpp"

using namespace std;

Point::Point(float x , float y){
      _x = x;
      _y = y;
}
void Point::setX(float x){
      _x = x;
}
void Point::setY(float y){
      _y = y;
}
float Point::getX(){
      return(_x);
}
float Point::getY(){
      return(_y);
}
void Point::affiche(){
      cout << "le point est de coordonne (" << _x << " , " << _y << ")" << endl;
}
void Point::deplace(float dx , float dy){
      _x += dx;
      _y += dy;
}