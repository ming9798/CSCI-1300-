// CS1300 Fall 2020
// Author: Mia Nguyen
// Recitation: 511 - Calista Nguyen
// Homework 4 - Problem #1

#include <iostream>
using namespace std;

int main() {
    int number;
    int i, sum = 0;
    cout << "Enter a positive number:\n";
    cin >> number;

    for (i=0; i <= number; i += 2) {
        sum = sum + i;
    }
cout << "Sum: " << sum;

}