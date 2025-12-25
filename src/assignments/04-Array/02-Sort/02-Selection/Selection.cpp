/*
Selection sort algorithm implementation in C++
Author: Ali Ghanizade
Date: 2024-06-15
*/

#include <iostream>
#include "../../../../pkg/pkg.hpp"
using namespace std;

void SelectionSortFunction(){
    int size = GetLenArray();
   
    int* arr = GetArray(size);

    PrintArrayFunction(arr, size);

    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }

    cout << "Sorted array: " << endl;
    PrintArrayFunction(arr, size);

    delete[] arr;
}