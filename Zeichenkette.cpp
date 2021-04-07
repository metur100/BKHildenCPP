#include <iostream>
#include <algorithm> 
using namespace std;
#include <math.h>

int anzahlZeichen(char*, int, char);
bool palindrom(char*, int);
void umdrehen(char*, int);
long char2int(char* toLong);

int arrLen(char _arr[])
{
    int result = 0;
    while (_arr[result] != '\0')
    {
        result++;
    }
    return result;
}

int anzahlZeichen( char _arr[], char _c )
{
    int result = 0;
    for (int i = 0; i < arrLen(_arr); i++)
    {
        if (_arr[i] == _c)
            result++;
    }
    return result;
}

bool palindrom( char _arr[] )
{
    bool result = true;
    int i = 0;
    for ( ; i < arrLen(_arr); i++);
    i--;
    for (int j = 0; j < i; j++, i--)
    {
        if (_arr[j] != _arr[i])
        {
            result = 0;
            break;
        }
    }
    return result;
}

void umdrehen( char _arr[] )
{
    cout << "\"" << _arr << "\" ist umgedreht \"";
    for (int i = arrLen(_arr); i > -1; i--)
    {
        cout << _arr[i];
    }
    cout << "\"" << endl;
}
long char2int(char* toLong) 
{
    int counter = 0;
    for (int i = 0; i < 30; i++) {
        switch (toLong[i]) {
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
        case '0':
            counter++;
        default:
            break;
        }
    }

    int counterConst = counter;
    long* xarr = new long[counterConst];
    counter = 0;

    for (int i = 0; i < 30; i++) {
        switch (toLong[i]) {
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
        case '0':
            xarr[counter] = toLong[i] - '0';
            counter++;
        default:
            break;
        }
    }

    counter = 0;
    long x = 0;
    for (int i = 0; i < counterConst; i++) {
        x += (xarr[counterConst - i - 1]) * pow(10, counter);
        counter++;
    }
    
    return x;
}
int main()
{
    char kette[20+1] = "Zeichenkette";
    char buchstabe = 'e';
    cout << kette << " hat " << anzahlZeichen(kette, buchstabe) << " mal den Buchstaben: " << buchstabe << endl;
    char kette1[4 + 1] = "pep";
    cout << "\nDer String ist " << ((palindrom(kette1) == 1) ? "ein " : "kein ") << "Palindrom." << endl;
    char kette2[5 + 1] = "Pep";
    umdrehen(kette2);
    char kette3[] = "AB$123SAF";
    char2int(kette3);
    cout << "\nChar to int " << char2int(kette3) << endl;
}