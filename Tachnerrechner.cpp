#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{
	int eingabe1;
	int eingabe2;
	int ergebnis;
	char rechenzeichen;	
	while (true)
	{
		cout << "Geben Sie die 1.Zahl ein : ";
		cin >> eingabe1;
		cout << "Geben Sie die gewuenschte Rechenoperation an (+ - * /): ";
		cin >> rechenzeichen;
		cout << "Geben Sie die 2.Zahl ein: ";
		cin >> eingabe2;
		if (rechenzeichen == '+')
		{
			ergebnis = eingabe1 + eingabe2;
		}
		else if (rechenzeichen == '-')
		{
			ergebnis = eingabe1 - eingabe2;
		}
		else if (rechenzeichen == '*')
		{
			ergebnis = eingabe1*eingabe2;
		}
		else
		{
			ergebnis = eingabe1 / eingabe2;
		}
		cout << "Ergebnis: " << ergebnis << "\n";

		char ch = 'n';
		cout << "Weitere Berechnunge, [y/n] ? ";
		cin >> ch;
		if (ch == 'Y' || ch == 'y')
			continue;
		else
			break;
	}
}