//sphere.cpp (Kugel)
#include "sphere.h"

float soberflaeche=0.0, svolumen=0.0;        // Deklaration der Rechenvariablen

float Sphere::berechneOberflaeche()          // Berechnung der Oberfläche der Kugel
{
  soberflaeche = 4 * 3.141828 * sradius * sradius;
  moberflaeche(soberflaeche);
  return soberflaeche;
}

float Sphere::berechneVolumen()              // Berechnung des Kugelvolumens
{
  svolumen = 4 * (3.141828 * sradius * sradius * sradius)/3;
  mvolumen(svolumen);
  return svolumen;
}

void Sphere::setzeSeiten(float sr)           // Speichern des Kugelradius
{
  sradius = sr;
}
