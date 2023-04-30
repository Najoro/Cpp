#include <iostream>
#include "PointCol.hpp"

using namespace std;

int main()
{
      Point A = Point(12,23);
      A.affiche();
      A.deplace(-10,-20);
      A.affiche();

      cout << "---------------------------" << endl;

      PointCol B = PointCol(2.5,3.25,5);
      B.affiche();
      // B.deplace(-10,-20);
      // B.affiche();

      return 0;
}