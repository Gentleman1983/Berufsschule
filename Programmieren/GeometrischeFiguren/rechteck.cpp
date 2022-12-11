//rechteck.cpp
#include "rechteck.h"

float rumfang=0.0, rflaeche=0.0;                // Deklaration der Rechenvariablen

float Rechteck::berechneUmfang()
{
  rumfang = 2 * seitea + 2 * seiteb;            // Berechnung des Umfangs des Rechtecks
  mumfang(rumfang);
  return rumfang;
}

float Rechteck::berechneFlaeche()               // Berechnung der Fläche des Rechtecks
{
  rflaeche = seitea * seiteb;
  mflaeche(rflaeche);
  return rflaeche;
}

void Rechteck::setzeSeiten(float ra, float rb)    // Speichern der Kantenlängen des Rechtecks
{
  seitea = ra;
  seiteb = rb;
}
