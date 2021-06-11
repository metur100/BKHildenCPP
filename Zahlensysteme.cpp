#include <iostream>
#include <iomanip>
using namespace std;


void hexadezimal(int);
void oktal(int); 
void dezimal(int);

int main()  {

    int zahl;
    int eingabe;
    void (*(pfunk[3]))(int);

    pfunk[0] = hexadezimal;
    pfunk[1] = oktal;
    pfunk[2] = dezimal;

        
    cout << "Bitte die Zahl eingeben: ";
    cin >> zahl;

    do
    {
    cout << endl << "1: hex" << endl 
        << "2: okt" << endl << "3: dez" << endl
        << "Welche Umwandlung (1..3): "; 

    cin >> eingabe;
    
    if ((eingabe>0)&&(eingabe<4)) pfunk[eingabe-1](zahl);
        else cout << endl << "Ungueltige Eingabe";
    }
    while (eingabe);

    return 0;
}


void hexadezimal(int x){
    cout << "Die Zahl lautet hexadezimal: " << hex << x;
    cout << endl;
}

void oktal(int x){
    cout << "Die Zahl lautet oktal: " << oct << x;
    cout << endl;
}
        

void dezimal(int x){
    cout << "Die Zahl lautet dezimal: " << dec << x;
    cout << endl;
}