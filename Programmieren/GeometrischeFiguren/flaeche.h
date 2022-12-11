//flaeche.h
#ifndef __Flaeche
#define __Flaeche

#include "geomfigur.h"

class Flaeche : public Geomfigur
{
  public:  Flaeche();
           void showUmfang();
           void showFlaeche();
           void mflaeche (float);
           void mumfang (float);

  private: float vumfang;
           float vflaeche;
};
#endif
