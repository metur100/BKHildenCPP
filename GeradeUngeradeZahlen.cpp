#include <iostream>

using namespace std;

void getArr(int*, int);
int* getEvensAndOdds(int*, int*, int*);

int main() {
    int arrSize = 10;
    int evenSize = 0;
    int* allNums = new int[10];
    getArr(allNums, arrSize);
    for (int i = 0; i < 10; i++) {
        if (allNums[i] % 2 == 0) {
            evenSize++;
        }
    }
    int* evenNums = new int[evenSize];
    int* oddNums = new int[10 - evenSize];
    int* counter;
    counter = getEvensAndOdds(allNums, evenNums, oddNums);
    std::cout << "\n\nAusgabe der " << counter[0] << " geraden Zahlen:" << endl;
    for (int i = 0; i < counter[0]; i++) {
        std::cout << evenNums[i] << "\t";
    }
    std::cout << "\n\nAusgabe der " << counter[1] << " ungeraden Zahlen:" << endl;
    for (int i = 0; i < counter[1]; i++) {
        std::cout << oddNums[i] << "\t";
    }
    std::cout << endl << endl;
}

void getArr(int* allNums, int arrSize) {
    for (int i = 0; i < arrSize; i++) {
        allNums[i] = rand() % 98999 + 1000;
    }
    std::cout << "\nInput list:\n";
    for (int i = 0; i < arrSize; i++) {
        std::cout << allNums[i] << "\t";
    }
    std::cout << std::endl;
}

 int* getEvensAndOdds(int* allNums, int* evenNums, int* oddNums) {
    int countEven = 0;
    int countOdd = 0;
    for (int i = 0; i < 10; i++) {
        if (allNums[i] % 2 == 0) {
            evenNums[countEven] = allNums[i];
            countEven++;
        }
        else {
            oddNums[countOdd] = allNums[i];
            countOdd++;
        }
    }
    int* counter = new int[2];
    counter[0] = countEven;
    counter[1] = countOdd;
    return counter;
}