//koerper.h
#ifndef __Koerper
#define __Koerper

#include "geomfigur.h"

class Koerper : public Geomfigur
{
  public:  Koerper();
           void showOberflaeche();
           void showVolumen();
           void moberflaeche (float);
           void mvolumen(float);

  private: float voberflaeche;
           float vvolumen;
};
#endif
