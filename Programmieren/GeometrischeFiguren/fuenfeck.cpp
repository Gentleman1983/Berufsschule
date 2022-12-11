//fuenfeck.cpp
#include "fuenfeck.h"

float fumfang = 0.0, fflaeche = 0.0;       // Deklaration der lokalen Rechenvariablen

float Fuenfeck::berechneUmfang()       // Berechnung des Umfangs des Pentagons
{
  fumfang = 5 * fseite;
  mumfang(fumfang);
  return fumfang;
}

float Fuenfeck::berechneFlaeche()      // Berechnung der Fläche des Pentagons (A = 5/4 * tan(54°) * a²)
{
  fflaeche = 1.25 * tan((54 * 3.141828) / 180) * fseite * fseite;  // Bei der Winkelfunktion tan() der
  mflaeche(fflaeche);                                              // math.h ist die Eingabe des Winkels
  return fflaeche;                                                 // erforderlich!!!
}

void Fuenfeck::setzeSeiten(float fa)   // Festlegung der Seitenläge des Fünfecks
{
  fseite = fa;
}
