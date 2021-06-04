#include <iostream>

using namespace std;

void printArr(char**, int);
char** sortArr(char**, int);

int main() {
    int arrSize;
    cout << "Geben Sie die Groesse der Klasse ein:\n";
    cin >> arrSize;
    arrSize *= 2;
    char** array = new char* [arrSize];
    cout << "Geben Sie die Nach- und Vornamen der Schüler der Klasse ein:\n";
    for (int i = 0; i < arrSize; i++) {
        array[i] = new char[20];
        cin >> array[i];
    }
    array = sortArr(array, arrSize);
    printArr(array, arrSize);
}

char** sortArr(char** _array, int arrSize) {
    char temp = NULL;
    for (int i = 0; i < arrSize; i += 2) {
        for (int j = 0; j < (arrSize - 1); j += 2) {
            if (_array[i][0] < _array[j][0]) {
                for (int k = 0; k < 2 - 1; k++) {
                    swap(_array[i], _array[j]);
                    swap(_array[i + 1], _array[j + 1]);
                }
            }
            else if (_array[i][0] == _array[j][0]) {
                if (_array[i][1] < _array[j][1]) {
                    for (int k = 0; k < 2 - 1; k++) {
                        swap(_array[i], _array[j]);
                        swap(_array[i + 1], _array[j + 1]);
                    }
                }
                else if (_array[i][1] == _array[j][1]) {
                    if (_array[i][2] < _array[j][2]) {
                        for (int k = 0; k < 2 - 1; k++) {
                            swap(_array[i], _array[j]);
                            swap(_array[i + 1], _array[j + 1]);
                        }
                    }
                }
            }
        }
    }
    return _array;
}

void printArr(char** _array, int _arrSize) {
    for (int i = 0; i < _arrSize; i += 2) {
        cout << _array[i] << ", " << _array[i + 1] << endl;
    }
}