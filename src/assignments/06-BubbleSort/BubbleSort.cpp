/*Sorting The Array By Bubble Sort
Author: Narges A'amam
Date: 1404-10-5
*/
#include <iostream>

#include "../../pkg/pkg.hpp"

using namespace std;

void BubbleSort()
{
    cout << "Enter The Size Of Your Array";
    int Size = GetNumber();
    int array[Size];
    cout << "Enter Your Array Elements:";
    GetArray(array, Size);
    int temp = 0;

    for (int i = 0; i < Size - 1; i++)
    {
        for (int j = 0; j < Size - 1 - i; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j + 1];
                array[j + 1] = array[j];
                array[j] = temp;
            }
        }
    }
    PrintArrayFunction(array, Size);
}
