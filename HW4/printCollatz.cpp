// CS1300 Fall 2020
// Author: Mia Nguyen
// Recitation: 511 - Calista Nguyen
// Homework 4 - Problem #2

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a positive number:\n";
    cin >> num;

    cout << num << "\n";
    while (num > 1) {
        if (num%2 > 0) {
            num = 3*num +1;
        }
        else {
            num = num/2;
        }
    cout << num << "\n";
    }
}