#include <cstdlib>
#include <iostream>
using namespace std;


int main()
{
    int startKapital;
    cout << "Bitte geben den Startkapital: " << endl;	
    cin >> startKapital;
    int zinssatz;
    cout << "Bitte geben Sie den Zinsatz: " << endl;
    cin >> zinssatz;
    int prozent;
    int milion = 1000000;
    int jahre = 0;
    while (startKapital > milion)
    {
           	startKapital = zinssatz / 100 * startKapital;
    	jahre++;
    }
    cout << "Jahre: " << "\n" << jahre << endl;
    system("PAUSE");
}

