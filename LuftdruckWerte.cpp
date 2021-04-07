#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	int months = 0;
	int number = 0;
	double pressure[13][21];

	cout << "Eingabe von Luftdruck-Werten in bar." << endl;
	cout << setw(25) << "Letzter Beobachtungsmonat (1...12): ";
	do {
		cin >> months;
	} while (months < 1 || months > 12);
	cout << setw(25) << "Anzahl der Messballons: ";
	do {
		cin >> number;
	} while (number < 1 || number > 20);

	cout << endl;

	for (int month = 1; month <= months; month++) {
		cout << month << ". Monat." << endl;
		for (int nums = 1; nums <= number; nums++) {
			cout << "Druck bei Ballon Nr. " << nums << "? ";
			cin >> pressure[month][nums];
		}
	}

	//Durchschnitt jeden Monats
	for (int i = 1; i <= months; i++) {
		pressure[i][0] = 0;
		for (int j = 1; j <= number; j++) {
			pressure[i][0] += pressure[i][j];
		}
		pressure[i][0] /= number;
	}

	//Durchschnitt jeden Ballons
	for (int i = 1; i <= number; i++) {
		pressure[0][i] = 0;
		for (int j = 1; j <= months; j++) {
			pressure[0][i] += pressure[j][i];
		}
		pressure[0][i] /= months;
	}

	//Durchschnitt Total
	pressure[0][0] = 0;
	for (int i = 1; i <= months; i++) {
		pressure[0][0] += pressure[i][0];
	}
	pressure[0][0] /= months;
	
	cout << endl;

	cout << "Druckmessungen." << endl;
	cout << setw(25) << "Feld links oben: " << "Gesamtdurchschnitt aller gemessenen Druecke." << endl;
	cout << setw(25) << "Oberste Zeile <Monat 0>: " << "Durchschnittsdruecke aller Monate bei jedem Ballon." << endl;
	cout << setw(25) << "Linke Spalte <Ballon 0>: " << "Durchschnittsdruecke aller Ballons in jedem Monat." << endl;

	cout << endl;
	cout << setw(7 * number) << "Ballon Nr." << endl;
	cout << setw(15) << right << 0;
	for (int ballonnums = 1; ballonnums <= number; ballonnums++) {
		cout << setw(7) << ballonnums;
	}
	cout << endl;
	for (int line = 0; line <= months; line++) {
		cout << setw(7) << "Monat  " << setw(5) << left << line;
		for (int ballons = 0; ballons <= number; ballons++) {
			cout << setw(7) << setprecision(3) << pressure[line][ballons];
		}
		cout << endl;
	}

}