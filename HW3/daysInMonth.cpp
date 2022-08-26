// CS1300 Fall 2020
// Author: Mia Nguyen
// Recitation: 511 - Calista Nguyen
// Homework 3 -  Problem #5

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int enterYear;
    int enterMonth;
    cout << "Enter a year:\x0A";
    cin >> enterYear;
    cout << "Enter a month:\x0A";
    cin >> enterMonth;

    if (enterMonth < 1 || enterMonth > 12) {
        cout << "Invalid month";
    }
    
    int leapYear = enterYear % 4;
    int leapYearAfter = enterYear % 400;


    switch(enterMonth) {
        case 1 : cout << "31 days";
            break;
        case 2 :
            if (enterYear < 1582 && leapYear == 0 && enterMonth == 2) {
            cout << "29 days";
            }
                else if (enterYear >= 1582 && leapYearAfter == 0 && enterMonth == 2) {
                    cout << "29 days";
                }
                else {
                    cout << "28 days";
                }
            break;
        case 3 : cout << "31 days";
           break;
        case 4 : cout << "30 days";
            break;
        case 5 : cout << "31 days";
            break;
        case 6 : cout << "30 days";
           break;
        case 7 : cout << "31 days";
            break;
        case 8 : cout << "31 days";
            break;
        case 9 : cout << "30 days";
            break;
        case 10 : cout << "31 days";
            break;
        case 11 : cout << "30 days";
            break;
        case 12 : cout << "31 days";
            break;  
}
   
}