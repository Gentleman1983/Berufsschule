#ifndef __Pyramide
#define __Pyramide
#include "koerper.h"

class Pyramide : public Koerper
{
  public:   float Pyramide::berechneOberflaeche();
            float Pyramide::berechneVolumen();
            void Pyramide::setzeSeiten(float pb, float ph);

  private:  float pbreite, phoehe;
};
#endif
