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
system("PAUSE");

return 0;
}