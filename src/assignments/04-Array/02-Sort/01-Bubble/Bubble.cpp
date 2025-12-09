/*
Bubble sort algorithm implementation in C++
Author: Ali Ghanizade
Date: 2024-06-15

*/

#include <iostream>

#include "../../../../pkg/pkg.hpp"

using namespace std;

void BubbleSortFunction(){
   int size = GetLenArray();

    int* arr = GetArray(size);

    PrintArrayFunction(arr, size);

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Sorted array: " << endl;
    PrintArrayFunction(arr, size);

    delete[] arr;
}