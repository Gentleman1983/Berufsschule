//functions.cpp

void fuenfeck_fct()
{
  float fuenfeck_fct_a = 0;                            // Deklaration der lokalen Rechenvariablen
  char fuenfeck_fct_farbe[15];

  Fuenfeck fuenfeckobj;                           //Objekt fuenfeckobj der Klasse Fuenfeck erstellen

  cout << "Bitte geben Sie die Kantenlaenge des Fuenfecks an." << endl << "=> ";
  cin >> fuenfeck_fct_a;
  cout << endl << endl << "Bitte geben Sie die Farbe des Fuenfecks an." << endl << "=> ";
  cin >> fuenfeck_fct_farbe;

  fuenfeckobj.setzeSeiten(fuenfeck_fct_a);             //Seite des Fuenfecks setzen
  fuenfeckobj.setcolor(fuenfeck_fct_farbe);
  fuenfeckobj.berechneFlaeche();
  fuenfeckobj.berechneUmfang();

  fuenfeckobj.showFlaeche();
  fuenfeckobj.showUmfang();
  fuenfeckobj.showcolor();
  getch();
}

void kreis_fct()
{
  float kreis_fct_r = 0;                            // Deklaration der lokalen Rechenvariablen
  char kreis_fct_farbe[15];

  Kreis kreisobj;                              //Objekt kreisobj der Klasse Kreis erstellen

  cout << "Bitte geben Sie den Radius des Kreises an." << endl << "=> ";
  cin >> kreis_fct_r;
  cout << endl << endl << "Bitte geben Sie die Farbe des Kreises an." << endl << "=> ";
  cin >> kreis_fct_farbe;

  kreisobj.setzeRadius(kreis_fct_r);                //Seite des Fuenfecks setzen
  kreisobj.setcolor(kreis_fct_farbe);
  kreisobj.berechneFlaeche();
  kreisobj.berechneUmfang();

  kreisobj.showFlaeche();
  kreisobj.showUmfang();
  kreisobj.showcolor();
  getch();
}

void pyramide_fct()
{
  float pyra_fct_b = 0, pyra_fct_h = 0;                  // Deklaration der lokalen Rechenvariablen
  char pyra_fct_farbe[15];

  Pyramide pyraobj;                            //Objekt pyraobj der Klasse Pyramide erstellen

  cout << "Bitte geben Sie die Kantenlaenge der Grundflaeche der Pyramide an." << endl << "=> ";
  cin >> pyra_fct_b;
  cout << endl << endl << "Bitte geben Sie die Hoehe der Pyramide an." << endl << "=> ";
  cin >> pyra_fct_h;
  cout << endl << endl << "Bitte geben Sie die Farbe der Pyramide an." << endl << "=> ";
  cin >> pyra_fct_farbe;

  pyraobj.setzeSeiten(pyra_fct_b, pyra_fct_h);           //Seiten des Trapez setzen
  pyraobj.setcolor(pyra_fct_farbe);
  pyraobj.berechneOberflaeche();
  pyraobj.berechneVolumen();

  pyraobj.showVolumen();
  pyraobj.showOberflaeche();
  pyraobj.showcolor();
  getch();
}

void quarder_fct()
{
  float quarder_fct_b = 0, quarder_fct_h = 0, quarder_fct_t = 0; // Deklaration der lokalen Rechenvariablen
  char quarder_fct_farbe[15];

  Quarder quarderobj;                             //Objekt quarderobj der Klasse Quarder erstellen

  cout << "Bitte geben Sie die Breite des Quarders an." << endl << "=> ";
  cin >> quarder_fct_b;
  cout << endl << endl << "Bitte geben Sie die Tiefe des Quarders an." << endl << "=> ";
  cin >> quarder_fct_t;
  cout << endl << endl << "Bitte geben Sie die Hoehe des Quarders an." << endl << "=> ";
  cin >> quarder_fct_h;
  cout << endl << endl << "Bitte geben Sie die Farbe des Quarders an." << endl << "=> ";
  cin >> quarder_fct_farbe;

  quarderobj.setzeSeiten(quarder_fct_b, quarder_fct_h, quarder_fct_t);//Seiten des Quarders setzen
  quarderobj.setcolor(quarder_fct_farbe);
  quarderobj.berechneOberflaeche();
  quarderobj.berechneVolumen();

  quarderobj.showVolumen();
  quarderobj.showOberflaeche();
  quarderobj.showcolor();
  getch();
}

void rechteck_fct()
{
  float rechtecks_fct_a = 0, rechtecks_fct_b = 0;        // Deklaration der lokalen Rechenvariablen
  char rechteck_fct_farbe[15];

  Rechteck rechteckobj;                        //Objekt trapezobj der Klasse Trapez erstellen

  cout << "Bitte geben Sie die Laenge der Seite a des Rechtecks an." << endl << "=> ";
  cin >> rechtecks_fct_a;
  cout << endl << endl << "Bitte geben Sie die Laenge der Seite b des Rechtecks an." << endl << "=> ";
  cin >> rechtecks_fct_b;
  cout << endl << endl << "Bitte geben Sie die Farbe des Rechtecks an." << endl << "=> ";
  cin >> rechteck_fct_farbe;

  rechteckobj.setzeSeiten(rechtecks_fct_a, rechtecks_fct_b);//Seiten des Rechtecks setzen
  rechteckobj.setcolor(rechteck_fct_farbe);
  rechteckobj.berechneFlaeche();
  rechteckobj.berechneUmfang();

  rechteckobj.showFlaeche();
  rechteckobj.showUmfang();
  rechteckobj.showcolor();
  getch();
}

void sphere_fct()
{
  float kugel_fct_r = 0;                           // Deklaration der lokalen Rechenvariablen
  char kugel_fct_farbe[15];

  Sphere kugelobj;                            //Objekt kugelobj der Klasse Sphere erstellen

  cout << "Bitte geben Sie den Radius der Kugel an." << endl << "=> ";
  cin >> kugel_fct_r;
  cout << endl << endl << "Bitte geben Sie die Farbe der Kugel an." << endl << "=> ";
  cin >> kugel_fct_farbe;

  kugelobj.setzeSeiten(kugel_fct_r);               //Seiten des Kugel setzen
  kugelobj.setcolor(kugel_fct_farbe);
  kugelobj.berechneOberflaeche();
  kugelobj.berechneVolumen();

  kugelobj.showVolumen();
  kugelobj.showOberflaeche();
  kugelobj.showcolor();
  getch();
}

void trapez_fct()
{
  float trapez_fct_o = 0, trapez_fct_u = 0, trapez_fct_h = 0;    // Deklaration der lokalen Rechenvariablen
  char trapez_fct_farbe[15];

  Trapez trapezobj;                               //Objekt trapezobj der Klasse Trapez erstellen

  cout << "Bitte geben Sie die Laenge der oberen Seite des Trapez an." << endl << "=> ";
  cin >> trapez_fct_o;
  cout << endl << endl << "Bitte geben Sie die Laenge der unteren Trapezseite an." << endl << "=> ";
  cin >> trapez_fct_u;
  cout << endl << endl << "Bitte geben Sie die Hoehe des Trapez an." << endl << "=> ";
  cin >> trapez_fct_h;
  cout << endl << endl << "Bitte geben Sie die Farbe des Trapez an." << endl << "=> ";
  cin >> trapez_fct_farbe;

  trapezobj.setzeSeiten(trapez_fct_o, trapez_fct_u, trapez_fct_h);//Seiten des Trapez setzen
  trapezobj.setcolor(trapez_fct_farbe);
  trapezobj.berechneFlaeche();
  trapezobj.berechneUmfang();

  trapezobj.showFlaeche();
  trapezobj.showUmfang();
  trapezobj.showcolor();
  getch();
}

void zylinder_fct()
{
  float zylinder_fct_r = 0, zylinder_fct_h = 0;             // Deklaration der lokalen Rechenvariablen
  char zylinder_fct_farbe[15];

  Zylinder zylinderobj;                           //Objekt zylinderobj der Klasse Zylinder erstellen

  cout << "Bitte geben Sie den Radius des Zylinders an." << endl << "=> ";
  cin >> zylinder_fct_r;
  cout << endl << endl << "Bitte geben Sie die Hoehe des Zylinders an." << endl << "=> ";
  cin >> zylinder_fct_h;
  cout << endl << endl << "Bitte geben Sie die Farbe des Zylinders an." << endl << "=> ";
  cin >> zylinder_fct_farbe;

  zylinderobj.setzeSeiten(zylinder_fct_r, zylinder_fct_h);//Radius und Höhe des Zylinders setzen
  zylinderobj.setcolor(zylinder_fct_farbe);
  zylinderobj.berechneOberflaeche();
  zylinderobj.berechneVolumen();

  zylinderobj.showVolumen();
  zylinderobj.showOberflaeche();
  zylinderobj.showcolor();
  getch();
}
