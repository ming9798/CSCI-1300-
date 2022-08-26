// CS1300 Fall 2020
// Author: Mia Nguyen
// Recitation: 511 - Calista Nguyen
// Homework 3 -  Problem #2 

#include <iostream>
#include <cmath>
using namespace std;

int main() {

    double hoursWorked;
    double hourlyPayRate;
    cout << "Enter the number of hours worked\x0A";
    cin >> hoursWorked;
    cout << "Enter an hourly pay rate\x0A";
    cin >> hourlyPayRate;

   if (hourlyPayRate < 0) {
            cout << "Invalid input";
    }
        else if (hoursWorked < 0) {
            cout << "Invalid input";
    } 
        else if (hoursWorked > 0 && hoursWorked <= 40){
            double regularPay = hoursWorked * hourlyPayRate;
            cout.precision(2);
            cout << fixed << "Paycheck: " << regularPay;
    }
        else if (hoursWorked > 40) {
            double overtimeHours = fmod(hoursWorked,40);
            double overtimePay = overtimeHours * hourlyPayRate * 1.5;
            double regularPay = (hoursWorked - overtimeHours) * hourlyPayRate;
            cout.precision(2);
            cout << fixed << "Paycheck: " << (regularPay + overtimePay);
    }

}