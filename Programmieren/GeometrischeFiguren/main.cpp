//--main.cpp
#include "includes.cpp"                          // Zentralisiertes Einbinden der Header-

#include "functions.cpp"                          // Einbinden der Headerdateien

                                                 // Files und Programmklassen
int main()
{
  cout << "#######################################################" << endl;
  cout << "#Berechnungsprogramm fuer geometrische Figuren V. 1.0 #" << endl;
  cout << "#(C) 2006 by Christian Otto                           #" << endl;
  cout << "#######################################################" << endl << endl << endl;
  
  int eingvar = 0;                               // Deklaration der Eingabevariablen
  
  do
    {
      cout << "Bitte waehlen Sie Ihr Objekt aus:" << endl;
      cout << "- Fuenfeck   (1)" << endl;
      cout << "- Kreis      (2)" << endl;
      cout << "- Kugel      (3)" << endl;
      cout << "- Pyramide   (4)" << endl;
      cout << "- Quarder    (5)" << endl;
      cout << "- Rechteck   (6)" << endl;
      cout << "- Trapez     (7)" << endl;
      cout << "- Zylinder   (8)" << endl;
      cout << "================" << endl;
      cout << "=> ";
      cin >> eingvar;
      if (eingvar < 1 || eingvar > 8)
      {
        cout<<endl;
        cout<<"==========================================="<<endl;
        cout<<"Es sind nur Werte zwischen 1 und 8 erlaubt!"<<endl;
        cout<<"==========================================="<<endl;
      }
    }
    while (eingvar < 1 || eingvar > 8);
    cout<<endl<<endl;

    switch(eingvar)
    {

// Erstellung eines Objektes vom Typ Fünfeck
      case 1:
      {
        fuenfeck_fct();
        break;
      }

// Erstellung eines Objektes vom Typ Kreis
      case 2:
      {
        kreis_fct();
        break;
      }

// Erstellung eines Objektes vom Typ Kugel
      case 3:
      {
        sphere_fct();
        break;
      }
// Erstellung eines Objektes vom Typ Pyramide
      case 4:
      {
        pyramide_fct();
        break;
      }
// Erstellung eines Objektes vom Typ Quarder
      case 5:
      {
        quarder_fct();
        break;
      }
// Erstellung eines Objektes vom Typ Rechteck
      case 6:
      {
        rechteck_fct();
        break;
      }
// Erstellung eines Objektes vom Typ Trapez
      case 7:
      {
        trapez_fct();
        break;
      }
// Erstellung eines Objektes vom Typ Zylinder
      case 8:
      {
        zylinder_fct();
        break;
      }
    }
  
  return 0;
}
