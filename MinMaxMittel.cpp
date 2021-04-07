#include <ctime> 
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    int aList[100], r, aListSize;
    srand((unsigned)time(0));

    cout << "=====================\n";
    for (int i = 0; i < 100; i++) {
        //Randomzahlen in das Array schreiben
        r = rand() % 1000;
        aList[i] = r;
        //Randomzahlen ausgeben aus dem Array
        if (i == 99) { cout << aList[i] << endl; }
        else { cout << aList[i] << ", "; }
    }
    cout << "=====================\n";

    //Größe des Arrays bestimmen
    aListSize = sizeof(aList) / sizeof(aList[0]);

    //Array nach Größe sortieren
    sort(aList, aList + aListSize);

    //Randomzahlen sortiert ausgeben aus dem Array
    for (int i = 0; i < 100; i++) {
        if (i == 99) { 
            cout << aList[i] << endl; 
        }
        else { 
            cout << aList[i] << ", "; 
        }
    }
    cout << "=====================\n";

    //Zahlen filtern nach Max und Min Zahl
    int max, min, maxStelle, minStelle;
    maxStelle = 0;
    minStelle = 0;
    max = min = aList[0];
    for (int i = 0; i < 100; i++) {
        if (max < aList[i]) { max = aList[i]; maxStelle = i + 1; }
        if (min > aList[i]) { min = aList[i]; minStelle = i + 1; }
    }
    //Ausgabe von min, max und deren Stellen im Array
    cout << "max: " << max << " Stelle: " << maxStelle << endl;
    cout << "min: " << min << " Stelle: " << minStelle << endl;
//Ausgabe der Spannweite
    int spannweite;
    spannweite = max - min;
    cout << "Die Spannweite betraegt: " << spannweite << endl;

    //Median berechnen
    int median;
    median = (aList[49] + aList[50]) / 2;

    cout << "Der Median des Arrays betraegt: " << median << endl;

    //Mittlere Abweichung bestimmen
    int mittelwert, mittlereAbweichung;
    mittelwert = 0;
    mittlereAbweichung = 0;

    for (int i = 0; i < 100; i++) {
        mittelwert += aList[i];
    }
    mittelwert = mittelwert / aListSize;

    cout << "Der Mittelwert betraegt: " << mittelwert << endl;

    for (int i = 0; i < 100; i++) {
        mittlereAbweichung += abs(aList[i] - mittelwert);
    }
    mittlereAbweichung = mittlereAbweichung / aListSize;

    cout << "Die Mittlere Abweichung betraegt: " << mittlereAbweichung << endl;
}