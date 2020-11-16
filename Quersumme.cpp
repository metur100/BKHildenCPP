#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{
	int zahl;
	int q = 0;
	cout << "Bitte Zahl eingeben ";
	cin >> zahl;
	while (zahl > 0) {
		q += zahl % 10;
		zahl /= 10;
	}
	cout << "Die Quersumme ist: " << q;
	system("PAUSE");
}