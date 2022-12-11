//kreis.cpp
#include "kreis.h"

float kreisumfang = 0.0, kflaeche = 0.0;    // Deklaration der Rechenvariablen

float Kreis::berechneUmfang()           // Berechnung des Kreisumfangs
{
  kreisumfang = 2 * Radius * 3.141828;
  mumfang(kreisumfang);
  return kreisumfang;
}

float Kreis::berechneFlaeche()          // Berechnung der Kreisfläche
{
  kflaeche = Radius * Radius * 3.141828;
  mflaeche(kflaeche);
  return kflaeche;
}

void Kreis::setzeRadius(float r)        // Speicherung des Kreisradius
{
  Radius = r;
}
