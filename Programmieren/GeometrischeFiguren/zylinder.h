#ifndef __Zylinder
#define __Zylinder
#include "koerper.h"

class Zylinder : public Koerper
{
  public:   float Zylinder::berechneOberflaeche();
            float Zylinder::berechneVolumen();
            void Zylinder::setzeSeiten(float zr, float zh);

  private:  float zradius, zhoehe;
};
#endif
