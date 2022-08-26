// CS1300 Fall 2020
// Author: Mia Nguyen
// Recitation: 511-Calista Nguyen
// Homework 2 - Problem #5 (Convert Seconds)

#include <iostream>
using namespace std;

int main() {
    int inputSeconds;
        cout << "Enter a number of seconds:\x0A";
        cin >> inputSeconds;
    int hours = inputSeconds / 3600;
    int hoursRemainder = inputSeconds % 3600;
    int minutes = hoursRemainder / 60;
    int minutesRemainder = hoursRemainder % 60;
    int seconds = minutesRemainder;

    cout << hours << " hour(s) " << minutes << " minute(s) " << seconds << " second(s)";
}