/*
Get number of inputs from user and return the maximum number among them.
Author: Ali Ghanizade
Date: 1404-9-13
*/


#include "../utils/utils.h"

using namespace std;

void MaxNumberFunction() {
    int max = 0;
    cout << "Enter Count of numbers: ";
    int count;
    cin >> count;
    for (int i = 0; i < count; i++) {
        int number = GetNumber();
        if (number > max) {
            max = number;
        }
    }
    string messages = "Max Number Function Executed Successfully. Max Number is: " ;
    cout << messages << max << endl;
  
   
}