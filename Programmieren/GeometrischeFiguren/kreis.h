//kreis.h
#ifndef __Kreis
#define __Kreis
#include "flaeche.h"

class Kreis : public Flaeche
{
  public:  float Kreis::berechneUmfang();
           float Kreis::berechneFlaeche();
           void Kreis::setzeRadius(float);

  private: float Radius;
};
#endif
