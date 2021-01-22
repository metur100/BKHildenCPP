#include <iostream>
using namespace std;

int euklid(unsigned long a, unsigned long b);

int main()
{
    unsigned long zahl1;		
	cout << "Bitte geben Sie die erste Zahl: " << endl;	
	cin >> zahl1;
    unsigned long zahl2;		
	cout << "Bitte geben Sie die zweite Zahl: " << endl;	
	cin >> zahl2;
    cout << "Der GGT ist: " << euklid (zahl1, zahl2);
    return 0;
}
int euklid(unsigned long a, unsigned long b)
{
	if (b == 0)
		return a;
	else
		return euklid(b, a % b);
}