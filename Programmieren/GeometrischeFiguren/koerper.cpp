//koerper.cpp
#include "koerper.h"

float kv = 0.0, ka = 0.0, voberflaeche = 0.0, vvolumen = 0.0;    // Deklaration der Rechenvariablen

Koerper::Koerper()                                       // Konstruktor f�r Objekte der Klasse Koerper
{
 voberflaeche = 0.0;
 vvolumen = 0.0;
}

void Koerper::showOberflaeche()                          // Ausgabe des Oberfl�chenma�es
{
  cout << endl << "Die Oberflaeche des Koerpers ist " << voberflaeche << "(Klasse Koerper)" << endl;
}

void Koerper::showVolumen()                              // Ausgabe des Volumens
{
  cout << endl << "Das Volumen des Koerpers ist " << vvolumen << "(Klasse Koerper)" << endl;
}

void Koerper::moberflaeche (float ka)                    // Speichern des Oberfl�chenma�es
{
  voberflaeche += ka;
}

void Koerper::mvolumen (float kv)                        // Speichern des Volumens
{
  vvolumen += kv;
}
