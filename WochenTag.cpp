#include<iostream>
#include <cmath>

using namespace std;

string BerechneTag(int tag, int monat, int jahr);
bool schaltJahr(int jahr);

int main()
{
    int tag, monat, jahr;
    cout << "Tag: "; cin >> tag;
    cout << "Monat: "; cin >> monat;
    cout << "Jahr: "; cin >> jahr;

    if (tag > 31 || monat > 12)
    {
        cout << "Falsche Eingabe" << endl;
        return 0;
    }
    if (tag > 28 && !schaltJahr(jahr) && monat == 2 || tag > 29 && monat == 2 && schaltJahr(jahr))
    {
        cout << "Falsche Eingabe" << endl;
        return 0;
    }
    cout << "Wochentag:  " << BerechneTag(tag, monat, jahr);
}
string BerechneTag(int tag, int monat, int jahr) 
{
    string wochenTag[7] = { "Samstag","Sonntag","Montag","Dienstag", "Mittwoch","Donnerstag","Freitag" };
    int mon;
    if (monat > 2)
        mon = monat;
    else 
    {
        mon = (12 + monat);
    }
    int y = jahr % 100;
    int c = jahr / 100;
    int w = (tag + floor((13 * (mon + 1)) / 5) + y + floor(y / 4) + floor(c / 4) + (5 * c)); //floor Rounds x downward, returning the largest integral value that is not greater than x.
    w = w % 7;
    return wochenTag[w];
}

bool schaltJahr(int jahr) 
{
    if (((jahr % 4 == 0) && (jahr % 100 != 0)) || (jahr % 400 == 0))

    {
        return true;
    }
    else
    {
        return false;
    }
}
