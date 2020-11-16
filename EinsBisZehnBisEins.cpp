#include <cstdlib>
#include <iostream>
using namespace std;


int main()
{
    int zahl;		
	cout << "Bitte geben Sie eine Zahl: " << endl;	
	cin >> zahl;
	
	for (int i = 1; i <= zahl; i++)
	{
    			cout << i << endl;
	}
	
	for (int j = zahl - 1; j <= zahl; j--)
	{
    		cout << j << endl;

		if (j == 1)
		{
    			break;
		}
	}
	system("PAUSE");
	return 0;
}