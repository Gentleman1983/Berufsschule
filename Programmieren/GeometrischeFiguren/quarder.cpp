//quarder.cpp
#include "quarder.h"

float qoberflaeche=0.0, qvolumen=0.0;      // Deklaration der Rechenvariablen

float Quarder::berechneOberflaeche()       // Berechnung der Oberfläche des Quarders
{
  qoberflaeche = 2 * ((qbreite * qtiefe) + (qhoehe * qtiefe) + (qbreite * qhoehe));
  moberflaeche(qoberflaeche);
  return qoberflaeche;
}

float Quarder::berechneVolumen()           // Berechnung des Volumens des Quarders
{
  qvolumen = qbreite * qhoehe * qtiefe;
  mvolumen(qvolumen);
  return qvolumen;
}

void Quarder::setzeSeiten(float qb, float qh, float qt)   // Speichern der Seitenlängen des Quarders
{
  qbreite = qb;
  qhoehe = qh;
  qtiefe = qt;
}
