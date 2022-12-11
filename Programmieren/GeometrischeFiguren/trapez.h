#ifndef __Trapez
#define __Trapez
#include "flaeche.h"

class Trapez : public Flaeche
{
  public:   float Trapez::berechneUmfang();
            float Trapez::berechneFlaeche();
            void Trapez::setzeSeiten(float ta, float tb, float th);

  private:  float tseitea, tseiteb, thoehe;
};
#endif
