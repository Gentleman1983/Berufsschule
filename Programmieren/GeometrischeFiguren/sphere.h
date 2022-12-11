#ifndef __Sphere
#define __Sphere
#include "koerper.h"

class Sphere : public Koerper
{
  public:   float Sphere::berechneOberflaeche();
            float Sphere::berechneVolumen();
            void Sphere::setzeSeiten(float sr);

  private:  float sradius;
};
#endif
