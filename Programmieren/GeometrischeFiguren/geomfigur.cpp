//geomfigur.cpp
#include "geomfigur.h"

void Geomfigur::setcolor(char *f)      // F�llen der Farbvariablen color
{
  strncpy(color, f, 14);               // Anpassen der Eingabe an die Zeichenl�nge von 14 Zeichen
}

void Geomfigur::showcolor()            // Ausgabe der Farbvariablen
{
  cout << color << endl;
}


