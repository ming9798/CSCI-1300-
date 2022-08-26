// CS1300 Fall 2020
// Author: Mia Nguyen
// Recitation: 511-Calista Nguyen
// Homework 2 - Problem #3 (Temperature)

#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    double fahrenheitTemp;
    cout << "Enter a temperature in Fahrenheit:\x0A";
    cin >> fahrenheitTemp;
    cout << "The temperature " << fahrenheitTemp << " degrees Fahrenheit is ";
    double celsiusTemp = (fahrenheitTemp - 32.0) * 5.0/9.0;
    cout.precision(2);
    cout << fixed << celsiusTemp << " degrees Celsius.";

}