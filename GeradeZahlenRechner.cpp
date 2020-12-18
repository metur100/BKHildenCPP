#include <cstdlib>

#include<iostream>
using namespace std;


int main()
{
	int zahl;
	cout << "Bitte geben Sie eine Zahl: " << endl;
	cin >> zahl;
	if (zahl % 2){
		zahl -= 1;
	}
	for (int i = zahl; i > 0; i-=2)
	{
		if (i == zahl)
		{
			cout << i;
		}
		else
		{
			cout << ", " << i;
		}
	}	
	system("PAUSE");	
	return 0;
}