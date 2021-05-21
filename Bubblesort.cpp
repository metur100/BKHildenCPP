#include <iostream> 
using namespace std;
#include <math.h>

const int MAX = 10;

void Bubblesort (int W[], int anzahl) 
{
    int dummy;
    int i, j;
    
    for(i = anzahl - 2; i >= 0; i--)
    {
        for(j = 0; j <= i; j++)
        {
            if(W[j] > W[j + 1])
            {
                dummy = W[j];
                W[j] = W[j + 1];
                W[j + 1] = dummy;
            }
        }
    }
}

int main () 
{
    int werte [MAX] = {10, 55, 23, 18, 5, 99, 22, 33, 1, 38};
    int i;

    Bubblesort(werte, MAX);

    cout << "Sortierung mit Bubblesort" << endl;

    for(i = 0; i < MAX; i++)
    {
        cout << werte[i] << " ";
    }
    cout << endl;

    return 0;
}

