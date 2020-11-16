#include <iostream>

using namespace std;

int Anzahl_Kartons ()
{
    int anzahlKartons;
    cin >> anzahlKartons;
    if (anzahlKartons == 0)
    {
        return 0;
    }
    else
    {
        return anzahlKartons;
    }   
}

int Anzazhl_Kilometer ()
{
    int anzahlKilometer;
    cin >> anzahlKilometer;

    return anzahlKilometer;
}

int Berechne_Rabbat (double nettoumsatz) 
{
    if (nettoumsatz <= 10000)
    {
        return nettoumsatz * 0.03;
    }
    else if (nettoumsatz > 10000 && nettoumsatz < 50000)
    {
        return nettoumsatz * 0.05;
    }
    else if (nettoumsatz > 50000)
    {
        return nettoumsatz * 0.07;
    }
}
int Berechne_Gewicht (int gewicht) 
{
    if (gewicht % 100 == 0)
    {
        return gewicht;
    }
    else
    {
        return ((gewicht / 100) + 1) * 100;
    }
    
}

int main()
{
    int anzahlKartons;
    int anzahlKilometers;
    double verkaufPreis;
    int bruttogewicht;
    int gewicht;
    int berechnetesGewicht;
    float fracht;
    float nettoUmsatz;
    float gesamtUmsatz;
    float berechneRabbat;
    float zielpreis;

    cout << "Program: Frachtberechnung " << endl;
    cout << "==========================\n " << endl;
    cout << "Anzahl Kartons: " << endl;
    anzahlKartons = Anzahl_Kartons();
    cout << "Anzahl Kilometer: " << endl;
    anzahlKilometers = Anzazhl_Kilometer(); 
    verkaufPreis = 7.85;
    bruttogewicht = 24;
    
    gewicht = anzahlKartons * bruttogewicht;
    berechnetesGewicht = Berechne_Gewicht (gewicht);
    fracht = (berechnetesGewicht / 100) * 0.06f * anzahlKilometers;
    nettoUmsatz = 7.85 * 12 * anzahlKartons;
    gesamtUmsatz = nettoUmsatz + fracht;
    berechneRabbat = (Berechne_Rabbat(nettoUmsatz));
    zielpreis = gesamtUmsatz - berechneRabbat;    

    cout << "\n" << endl;   
    cout << "Anzahl Kartons: " << anzahlKartons << endl;
    cout << "Anzahl Kilometer: " << anzahlKilometers << endl;
    cout << "Gewicht: " << gewicht << endl;
    cout << "Berechnetes Gewicht: " << berechnetesGewicht << endl;  
    cout << "Fracht: " << fracht << endl;
    cout << "Nettoumsatz: " << nettoUmsatz << endl;
    cout << "Gesamtumsatz: " << gesamtUmsatz << endl;
    cout << "Rabbat: " << berechneRabbat << endl;
    cout << "Zielpreis: " << zielpreis << endl;
}