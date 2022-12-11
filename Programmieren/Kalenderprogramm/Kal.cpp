//-----------------------------------------------------------------------------
//----------------------------- Kalender.cpp ----------------------------------
//------------------------------ Version 1.2 ----------------------------------
//------------------------------- (C) 2004 ------------------------------------
//--------------------------- by Christian Otto -------------------------------
//-----------------------------------------------------------------------------


//-----------------------------------------------------------------------------
//- Einbinden der Header-Dateien ----------------------------------------------
//-----------------------------------------------------------------------------

#include <conio.h>
#include <iostream.h>
#include <math.h>
#include <iomanip.h>

//-----------------------------------------------------------------------------

int main()
  {
    
//-----------------------------------------------------------------------------
//- Deklaration der Variablen: ------------------------------------------------   
//- Jahr ist das gew�nschte Jahr, Monat ist der gew�nschte Monat, Schaltj und -
//- Zaehler sind Rechenvariablen, MLaeng bestimmt die Monatsl�nge, SFeb ist ein
//- ja/nein-Feld, ob der Februar 28 oder 29 Tage hat, t ist der Z�hler f�r das-
//- Datum, l ist Z�hlvariabel f�r den Zeilenwechsel bei der Datumsausgabe, ----
//- err_lvl ist die Variable die einen Fehlercode bestimmt --------------------
//-----------------------------------------------------------------------------
    
    int Jahr = 0, Monat = 0, Schaltj = 0, MLaeng = 0, SFeb = 0, t = 0, l = 0;
    long int Zaehler = 0;
    
//-----------------------------------------------------------------------------
//- Ausgabe der Programmversion und des Copyrights ----------------------------    
//-----------------------------------------------------------------------------
    
    cout<<"Kalenderprogramm V. 1.2"<<endl;
    cout<<"Copyright (C) 2004 by Christian Otto"<<endl<<endl<<endl<<endl;
    
//-----------------------------------------------------------------------------
//- Dialog zur Auswahl des Jahres inkl. Korrekturschleife ---------------------
//-----------------------------------------------------------------------------    
    
    do
      {
        cout<<"Bitte geben Sie das Jahr ein. (als Zahl; z. B.: 2004."<<endl;
        cout<<"Es koennen nur Jahre ab dem Jahr 1 n. Chr. angezeigt werden.";
        cout<<endl<<"=> ";
        cin>>Jahr;
        if (Jahr < 1)
          {
            cout<<endl;
            cout<<"Dieses Jahr kann nicht ausgegeben werden, "<<endl;
            cout<<"da es nicht definiert ist."<<endl;
            cout<<"Bitte um erneute Eingabe des Jahres."<<endl;
            cout<<"=> ";
          }
      }
    while (Jahr < 1);
    cout<<endl<<endl;

//-----------------------------------------------------------------------------
//- Dialog zur Auswahl des Monats inkl. Korrekturschleife ---------------------
//-----------------------------------------------------------------------------    
    
    do
      {
        cout<<"Bitte geben Sie den Monat ein. (z.B. fuer Januar die '1')"<<endl;
        cout<<"=> ";
        cin>>Monat;
        if (Monat < 1 || Monat > 12)
          {
            cout<<endl;
            cout<<"Den gewaehlten Monat gibt es nicht."<<endl;
            cout<<"Bitte korrigieren Sie Ihre Eingabe."<<endl<<endl;
            cout<<"Bitte geben Sie den Monat ein."<<endl;
            cout<<"=> ";
          }
      }
    while (Monat < 1 ||  Monat > 12 );
    
    
//-----------------------------------------------------------------------------
//- Rechensystem zur Ermittlung des Grunddatums--------------------------------    
//- Jedes Normaljahr besitzt 365 Tage -----------------------------------------
//- Jedes 4. Jahr ist ein Schaltjahr, dass 366 Tage hat -----------------------
//- Jeweils die ersten 3 Jahrhunderte eines 400-Jahreszyklus sind Normaljahre -
//- Im Jahr 1 nach Christi Geburt hat ein neuer 400-Jahreszyklus begonnen -----
//-----------------------------------------------------------------------------
    
    Zaehler = Jahr * 365; 
    Schaltj = Jahr - Jahr % 4; 
    Zaehler = Zaehler + Schaltj / 4; 
    Schaltj = Jahr - Jahr % 100; 
    Zaehler = Zaehler - Schaltj/100; 
    Schaltj = Jahr - Jahr % 400; 
    Zaehler = Zaehler + Schaltj / 400;
    Zaehler = Zaehler - 365;
    Zaehler = Zaehler % 7;
    
//-----------------------------------------------------------------------------
//- Rechenalgorythmus zur Bestimmung der Monatsl�nge des Februars -------------            
//-----------------------------------------------------------------------------
            
    Schaltj = Jahr % 4;
    if (Schaltj == 0)
      {
        Schaltj = Jahr % 100;
        if (Schaltj == 0)
          {
            Schaltj = Jahr % 400;
            if (Schaltj == 0)
              {
                SFeb = 1;
              }
            else
              {
                SFeb = 0;
              }
          }
        else
          {
            SFeb = 1;
          }
      }
    else
      {
        SFeb = 0;
      }

//-----------------------------------------------------------------------------
//- Bestimmung der Monatsl�nge und des ersten Tages in einem Tags eines Monats 
//-----------------------------------------------------------------------------

    switch (Monat)
      {
      
//-----------------------------------------------------------------------------
//- Januar --------------------------------------------------------------------
//-----------------------------------------------------------------------------      
      
        case 1: 
          MLaeng = 31;
        break;
      
//-----------------------------------------------------------------------------
//- Februar -------------------------------------------------------------------
//-----------------------------------------------------------------------------      
              
        case 2:
          {
            MLaeng = 28 + SFeb;
            Zaehler = Zaehler + 31;
            Zaehler = Zaehler % 7;
          }
        break;
      
//-----------------------------------------------------------------------------
//- M�rz ----------------------------------------------------------------------
//-----------------------------------------------------------------------------      
              
        case 3:
          {
            MLaeng = 31;
            Zaehler = Zaehler + 59 + SFeb;
            Zaehler = Zaehler % 7;
          }
        break;
         
//-----------------------------------------------------------------------------
//- April ---------------------------------------------------------------------
//-----------------------------------------------------------------------------      
      
        case 4:
          {
            MLaeng = 30;
            Zaehler = Zaehler + 90 + SFeb;
            Zaehler = Zaehler % 7;
          }  
        break;
      
//-----------------------------------------------------------------------------
//- Mai -----------------------------------------------------------------------
//-----------------------------------------------------------------------------      
              
        case 5:
          {
            MLaeng = 31;
            Zaehler = Zaehler + 120 + SFeb;
            Zaehler = Zaehler % 7;
          }
        break;
      
//-----------------------------------------------------------------------------
//- Juni ----------------------------------------------------------------------
//-----------------------------------------------------------------------------      
              
        case 6:
          {
            MLaeng = 30;
            Zaehler = Zaehler + 151 + SFeb;
            Zaehler = Zaehler % 7;          
          }
        break;
      
//-----------------------------------------------------------------------------
//- Juli ----------------------------------------------------------------------
//-----------------------------------------------------------------------------      
              
        case 7:
          {
            MLaeng = 31;
            Zaehler = Zaehler + 181 + SFeb;
            Zaehler = Zaehler % 7;          
          }
        break;
      
//-----------------------------------------------------------------------------
//- August --------------------------------------------------------------------
//-----------------------------------------------------------------------------      
              
        case 8:
          {
            MLaeng = 31;
            Zaehler = Zaehler + 212 + SFeb;
            Zaehler = Zaehler % 7;          
          }
        break;
      
//-----------------------------------------------------------------------------
//- September -----------------------------------------------------------------
//-----------------------------------------------------------------------------            
        
        case 9:
          {
            MLaeng = 30;
            Zaehler = Zaehler + 243 + SFeb;
            Zaehler = Zaehler % 7;          
          }
        break;
      
//-----------------------------------------------------------------------------
//- Oktober -------------------------------------------------------------------
//-----------------------------------------------------------------------------      
              
        case 10:
          {
            MLaeng = 31;
            Zaehler = Zaehler + 273 + SFeb;
            Zaehler = Zaehler % 7;          
          }
        break;
      
//-----------------------------------------------------------------------------
//- November ------------------------------------------------------------------
//-----------------------------------------------------------------------------      
              
        case 11:
          {
            MLaeng = 30;
            Zaehler = Zaehler + 304 + SFeb;
            Zaehler = Zaehler % 7;          
          }
        break;
      
//-----------------------------------------------------------------------------
//- Dezember ------------------------------------------------------------------
//-----------------------------------------------------------------------------      
        
        case 12:
          {
            MLaeng = 31;
            Zaehler = Zaehler + 334 + SFeb;
            Zaehler = Zaehler % 7;          
          }
        break;
     }

//-----------------------------------------------------------------------------
//- Abgleich der Datumsverschiebung in Schaltjahren ---------------------------
//-----------------------------------------------------------------------------
    
    Zaehler = Zaehler - SFeb;
    Zaehler = Zaehler % 7;
        
//-----------------------------------------------------------------------------
//- Einf�gen der �berschriftszeile mit Monats- und Jahresangabe ---------------
//-----------------------------------------------------------------------------
    
    cout<<endl<<endl<<endl;
    cout<<"         Gewaehlter Monat: "<<Monat<<". "<<Jahr<<" A. D."<<endl;
    cout<<endl<<"|"<<setw(5)<<"Mo"<<"|"<<setw(5)<<"Di"<<"|"<<setw(5)<<"Mi"<<"|";
    cout<<setw(5)<<"Do"<<"|"<<setw(5)<<"Fr"<<"|"<<setw(5)<<"Sa"<<"|";
    cout<<setw(5)<<"So"<<"|"<<endl<<"|";
    
//-----------------------------------------------------------------------------
//- Vorr�cken bis zum Tag des 1. Tags des Monats ------------------------------
//-----------------------------------------------------------------------------
    
    while (Zaehler > 0)
      {
        l++;
        cout<<setw(5)<<""<<"|";
        Zaehler--;
      }
      
//-----------------------------------------------------------------------------
//- Zaehler f�r den gew�hlten Monat -------------------------------------------
//-----------------------------------------------------------------------------        
    
    while (MLaeng > 0)
      {
        if (l == 7)
          {
            cout<<endl<<"|";
            l = 0;
          }
        l++;
        t++;
        MLaeng--;
        cout<<setw(5)<<t<<"|";
      }
          
//-----------------------------------------------------------------------------
//- Beenden der Tabelle -------------------------------------------------------
//-----------------------------------------------------------------------------
    
    while (l < 7)
      {
        l++;
        cout<<setw(5)<<""<<"|";
      }
    cout<<endl<<endl;  
         
//-----------------------------------------------------------------------------
//- Warten auf Tastenanschlag und R�ckgabe von 0 an das System ----------------
//-----------------------------------------------------------------------------


          
    getch();
    return 0;
  }  
    
    
