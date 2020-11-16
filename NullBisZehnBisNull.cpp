#include <cstdlib>
#include <iostream>
using namespace std;


int main()
{
    for (int i = 10; i >= 0; i--)
    {
    	for (int j = i; j >= 0; j--)
    
    		cout << j << " ";
    	cout << endl;
    }
    system("PAUSE");
}