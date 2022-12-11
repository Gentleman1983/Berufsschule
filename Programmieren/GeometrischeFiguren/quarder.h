#ifndef __Quarder
#define __Quarder
#include "koerper.h"

class Quarder : public Koerper
{
  public:   float Quarder::berechneOberflaeche();
            float Quarder::berechneVolumen();
            void Quarder::setzeSeiten(float qb, float qh, float qt);

  private:  float qbreite, qhoehe, qtiefe;
};
#endif
