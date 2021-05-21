#include <iostream>

void getArr(int, int[]);
void swap(int*, int*);
int partition(int[], int, int);
void quickSort(int[], int, int);
void printArray(int[], int);

int main() {
    int arr[100];
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    getArr(arrSize, arr);
    quickSort(arr, 0, arrSize - 1);
    std::cout << "\nSorted list: \n";
    printArray(arr, arrSize);
    return 0;
}

void getArr(int arrSize, int  arr[])
{
    for (int i = 0; i < arrSize; i++) {
        arr[i] = rand() % 90 + 10;
    }
    std::cout << "\nInput list:\n";
    for (int i = 0; i < arrSize; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void swap(int* i, int* j) {
    int temp = *i;
    *i = *j;
    *j = temp;
}

int partition(int arr[], int min, int max) {
    int pivot = arr[max];
    int i = (min - 1);

    for (int j = min; j <= max - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[max]);
    return (i + 1);
}

void quickSort(int arr[], int min, int max) {
    if (min < max) {

        int pi = partition(arr, min, max);

        quickSort(arr, min, pi - 1);
        quickSort(arr, pi + 1, max);
    }
}

void printArray(int arr[], int arrSize) {
    int i;
    for (i = 0; i < arrSize; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}