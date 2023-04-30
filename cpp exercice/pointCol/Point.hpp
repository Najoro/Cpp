#ifndef POINT_H
#define POINT_H

#include <iostream>

using namespace std;

class Point
{
      protected:
            float _x; // abscice
            float _y; // ordonner
      public:
            Point(float x , float y);
            void setX(float x);
            void setY(float y);
            float getX();
            float getY();
            void affiche(); // affiche les coordonne
            void deplace(float dx , float dy); // deplace le point
};

#endif //POINT_H
