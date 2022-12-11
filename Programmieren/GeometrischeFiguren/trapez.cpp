//trapez.cpp
#include "trapez.h"

float tumfang = 0.0, tflaeche = 0.0, tdiagonale = 0.0, tmittel = 0.0, tdifmittel = 0.0;       //Deklaration der lokalen Rechenvariablen

float Trapez::berechneUmfang()    // Berechnung des Umfangs des Trapezes
{
  tumfang = tseitea + tseiteb + 2 * tdiagonale;
  mumfang(tumfang);
  return tumfang;
}

float Trapez::berechneFlaeche()   // Berechnung der Fläche des Trapezes
{
  tflaeche = tmittel * thoehe;
  mflaeche(tflaeche);
  return tflaeche;
}

void Trapez::setzeSeiten(float ta, float tb, float th)    // Vergabe der Seitenmaße
{
  tseitea = ta;
  tseiteb = tb;
  thoehe = th;

  if (tseitea < tseiteb)  // Berechnung der Länge der Trapezdiagonalen in Abhängigkeit der
  {                       // oberen und unteren Trapezseite
    tdifmittel = 0.5 * (tseiteb - tseitea);
    tmittel = 0.5 * (tseitea + tseiteb);
    tdiagonale = sqrt (tdifmittel * tdifmittel + thoehe * thoehe);
  }
  else if (tseitea == tseiteb)
  {
    tmittel = tseitea;
    tdiagonale = thoehe;
  }
  else
  {
    tdifmittel = 0.5 * (tseitea - tseiteb);
    tmittel = 0.5 * (tseitea + tseiteb);
    tdiagonale = sqrt (tdifmittel * tdifmittel + thoehe * thoehe);
  }

}
