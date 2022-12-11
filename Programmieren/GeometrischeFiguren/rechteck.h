#ifndef __Rechteck
#define __Rechteck
#include "flaeche.h"

class Rechteck : public Flaeche
{
  public:   float Rechteck::berechneUmfang();
            float Rechteck::berechneFlaeche();
            void Rechteck::setzeSeiten(float ra, float rb);

  private:  float seitea, seiteb;
};
#endif
