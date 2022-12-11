//flaeche.cpp
#include "flaeche.h"

float fu = 0.0, fa = 0.0, vflaeche = 0.0, vumfang = 0.0;     // Deklaration der lokalen Rechenvariablen

Flaeche::Flaeche()                                   // Konstruktor der Klasse Fl�che
{
 vumfang = 0.0;
 vflaeche = 0.0;
}

void Flaeche::showUmfang()                           // Ausgabe des Umfangs
{
  cout << endl << "Der Umfang der Flaeche ist " << vumfang << "(Klasse Flaeche)" << endl;
}

void Flaeche::showFlaeche()                          // Ausgabe der Fl�che
{
  cout << endl << "Die Groesse der Flaeche ist " << vflaeche << "(Klasse Flaeche)" << endl;
}

void Flaeche::mflaeche (float fa)                    // F�llen der Fl�chenvariable mit dem Fl�chenma�
{
  vflaeche += fa;
}

void Flaeche::mumfang (float fu)                     // F�llen der Umfangsvariable mit dem Umfangsma�
{
  vumfang += fu;
}
