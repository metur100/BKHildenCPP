#include <iostream>

using namespace std;

int main()
{
    float zahl1;
    cout << "Geben Sie die erste Zahl: " << endl;
    cin >> zahl1;
    float zahl2;
    cout << "Geben Sie die zweite Zahl: " << endl;
    cin >> zahl2;
    float zahl3;
    cout << "Geben Sie die dritte Zahl: " << endl;
    cin >> zahl3;

    if (zahl1 > zahl2 && zahl2 > zahl3 && zahl1 > zahl3)
    {
        cout << "Maximum: " << zahl1 << endl;
        cout << "Minmum: " << zahl3 << endl;
    }
    else if (zahl1 > zahl2 && zahl2 < zahl3 && zahl1 < zahl3)
    {
        cout << "Maximum: " << zahl3 << endl;
        cout << "Minmum: " << zahl2 << endl;
    }
    else if (zahl1 < zahl2 && zahl2 > zahl3 && zahl1 < zahl3)
    {
        cout << "Maximum: " << zahl2 << endl;
        cout << "Minmum: " << zahl1 << endl;
    }
}