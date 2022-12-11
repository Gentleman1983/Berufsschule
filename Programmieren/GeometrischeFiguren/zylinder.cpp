//zylinder.cpp
#include "zylinder.h"

float zoberflaeche = 0.0, zvolumen = 0.0;     // Deklaration der lokalen Rechenvariablen des Zylinders

float Zylinder::berechneOberflaeche()     // Berechnung der Oberfläche des Zylinders
{
  zoberflaeche = 2 * (zradius * zradius * 3.141828) + (2 * zradius * zhoehe * 3.141828);
  moberflaeche(zoberflaeche);
  return zoberflaeche;
}

float Zylinder::berechneVolumen()         // Berechnung des Volumens des Zylinders
{
  zvolumen = zradius * zradius * zhoehe * 3.141828;
  mvolumen(zvolumen);
  return zvolumen;
}

void Zylinder::setzeSeiten(float zr, float zh)    // Bestimmung und Festlegung der Zylinderhöhe und
{                                                 // des Radius der Grundfläche
  zradius = zr;
  zhoehe = zh;
}
