#include <cstdlib>
#include <iostream>
using namespace std;


int main()

{
	double startkapital;

	double zinssatz;

	int laufzeit;

	double erg;

	double zinsen;

	int i;

	cout << "Bitte geben Sie das gewuenschte Startkapital ein: " << endl;

	cin >> startkapital;


	cout << "Bitte geben Sie die gewuenschte Laufzeit ein: " << endl;

	cin >> laufzeit;


	cout << "Bitte geben Sie den gewuenschten Zinssatz ein: " << endl;

	cin >> zinssatz;

	for (i = 0; i <= laufzeit; i++)
	{
		zinsen = startkapital * zinssatz / 100 * (laufzeit*i);
		
		erg = startkapital + zinsen;
		
		cout << "Kapital im " << i << ". Jahr: " << erg << "EUR und der Zinsertrag betraegt " << zinsen << " EUR." << endl;
	}
		
	system("PAUSE");

	return 0;
}