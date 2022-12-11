#ifndef __Fuenfeck
#define __Fuenfeck
#include "flaeche.h"

class Fuenfeck : public Flaeche
{
  public:   float Fuenfeck::berechneUmfang();
            float Fuenfeck::berechneFlaeche();
            void Fuenfeck::setzeSeiten(float fa);

  private:  float fseite;
};
#endif
