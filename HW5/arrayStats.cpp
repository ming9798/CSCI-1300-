// CS1300 Fall 2020
// Author: Mia Nguyen
// Recitation: 511 - Calista Nguyen
// Homework 5 - Problem 2

#include <iostream>
#include <iomanip>
using namespace std;

void stats(double arr[], int elements) {
    double max = arr[0];
    double min = arr[0];
    double count = 0;
    for(int i=0; i < elements; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
        if(arr[i] < min) {
            min = arr[i];
        }
    count = count + arr[i];
    }
    double mean = count/elements; 
    cout.precision(2);
    cout << fixed << "Min: " << min << endl;
    cout << fixed << "Max: " << max << endl;
    cout << fixed << "Avg: " << mean;
}

int main () {
    double arr[3] = {1.24, 5.68, 3.456};
    stats(arr, 3);
}