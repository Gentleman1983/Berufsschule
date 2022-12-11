//flaeche.cpp
#include "flaeche.h"

float fu = 0.0, fa = 0.0, vflaeche = 0.0, vumfang = 0.0;     // Deklaration der lokalen Rechenvariablen

Flaeche::Flaeche()                                   // Konstruktor der Klasse Fläche
{
 vumfang = 0.0;
 vflaeche = 0.0;
}

void Flaeche::showUmfang()                           // Ausgabe des Umfangs
{
  cout << endl << "Der Umfang der Flaeche ist " << vumfang << "(Klasse Flaeche)" << endl;
}

void Flaeche::showFlaeche()                          // Ausgabe der Fläche
{
  cout << endl << "Die Groesse der Flaeche ist " << vflaeche << "(Klasse Flaeche)" << endl;
}

void Flaeche::mflaeche (float fa)                    // Füllen der Flächenvariable mit dem Flächenmaß
{
  vflaeche += fa;
}

void Flaeche::mumfang (float fu)                     // Füllen der Umfangsvariable mit dem Umfangsmaß
{
  vumfang += fu;
}
