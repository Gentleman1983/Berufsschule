//pyramide.cpp
#include "pyramide.h"

float poberflaeche = 0.0, pvolumen = 0.0, pshoehe = 0.0, philfsvar = 0.0, pmantelf = 0.0;   //Deklaration der Rechenvariablen

float Pyramide::berechneOberflaeche()                // Berechnung der Pyramidenoberfl�che
{
  philfsvar = 0.5 * pbreite;  // Errechnen der L�nge der fehlenden Kathete des Hilfsdreiecks
  pshoehe = sqrt (philfsvar * philfsvar + phoehe * phoehe); // Errechnen der H�he der Au�enseiten anhand des Satz des Pythagoras
  pmantelf = 0.5 * pbreite * pshoehe; // Berechnen der Fl�che einer der dreieckigen Au�enfl�chen der Pyramide

  poberflaeche = (pbreite * pbreite) + 4 * pmantelf;
  moberflaeche(poberflaeche);
  return poberflaeche;
}

float Pyramide::berechneVolumen()                    // Berechnung des Pyramidenvolumens
{
  pvolumen = (pbreite * pbreite * phoehe) / 3;
  mvolumen(pvolumen);
  return pvolumen;
}

void Pyramide::setzeSeiten(float pb, float ph)       // Speichend der Seiten der Pyramide
{
  pbreite = pb;
  phoehe = ph;
}
