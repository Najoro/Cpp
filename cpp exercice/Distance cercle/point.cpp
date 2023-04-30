#include <iostream>
#include "point.h"

void Point::Teste(){
      std::cout << "teste " << std::endl;
}
// Point::Point(float x = 0 , float y = 0){
//       m_x = x;
//       m_y = y;
// }
void Point::setx(float x){
      m_x = x;
}
void Point::sety(float y){
      m_y = y;
}