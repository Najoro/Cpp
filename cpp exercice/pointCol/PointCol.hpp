#ifndef POINTCOL_H
#define POINTCOL_H

#include <iostream>
#include "Point.hpp"

using namespace std;

class PointCol : public Point
{
      private:
            int _color; // definir le coleur
      public:
            PointCol(float x, float y ,int color);
            void setColor(int color);
            int getcolor();
            void affiche();
            void colore(int color);
};


#endif //POINTCOL_H
