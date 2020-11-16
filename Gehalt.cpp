#include <iostream>

using namespace std;

int main()
{
    
    double monatBruttoGehalt;
    cout << "Geben Sie den Bruttogehalt: " << endl;
    cin >> monatBruttoGehalt;
    cout << "Bruttogehalt: " << monatBruttoGehalt << endl;
    double lohnsteuer = 0.25;
    double kirchensteuer = 0.09;
    double kranken = 0.146;
    double pflege = 0.033;
    double renten = 0.186;
    double arbeitslos = 0.024;

    double lohnprozent;
    double kirchenprozent;
    double krankenprozent;
    double pflegeprozent;
    double rentenprozent;
    double arbeitslosprozent;

    lohnprozent = monatBruttoGehalt * lohnsteuer;
    cout << "Lohnsteuer: " << lohnprozent << endl;
    kirchenprozent = lohnprozent * kirchensteuer;
    cout << "Kirchensteuer: " << kirchenprozent << endl;
    double steuerabzuege = lohnprozent + kirchenprozent;
    cout << "Steuerrechtliche Abzuege: " << steuerabzuege << endl;

    double geteilteGehalt = monatBruttoGehalt / 2;
    krankenprozent = geteilteGehalt * kranken;
    cout << "Krankenversicherung: " << krankenprozent << endl;
    pflegeprozent = geteilteGehalt * pflege;
    cout << "Pflegeversicherung: " << pflegeprozent << endl;
    rentenprozent = geteilteGehalt * renten;
    cout << "Renteversicherung: " << rentenprozent << endl;
    arbeitslosprozent = geteilteGehalt *arbeitslos;
    cout << "Arbeitslosversischerung: " << arbeitslosprozent << endl;
    double sozialabzuege = krankenprozent + pflegeprozent + rentenprozent + arbeitslosprozent;
    cout << "Sozialrechtliche Abzuege: " << sozialabzuege << endl;
    
    double nettoWert = monatBruttoGehalt - (steuerabzuege + sozialabzuege);
    cout << "Nettowert: " << nettoWert << endl;  

    return 0;
}