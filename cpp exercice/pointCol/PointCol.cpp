#include <iostream>
#include "PointCol.hpp"

using namespace std;

PointCol::PointCol(float x, float y , int color) : Point(x,y)
{
      _color = color;
}
void PointCol::setColor(int color){
      _color = color;
}
int PointCol::getcolor(){
      return(_color);
}

void PointCol::affiche(){
      cout << "le Point_Colorer de coordonner (" << _x << "," << _y << ")" ;
      cout << " et le couleur " << _color <<endl;
}
void PointCol::colore(int color){
      _color = color;
}

#include <iostream>

