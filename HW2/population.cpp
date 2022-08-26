// CS1300 Fall 2020
// Author: Mia Nguyen
// Recitation: 511-Calista Nguyen
// Homework 2 - Problem #4 (Population)

#include <iostream>
using namespace std;

int main() {
    int currentPopulation;
        cout << "Enter the current population:\x0A";
        cin >> currentPopulation;
    int secondsInOneYear  = 365 * 24 * 60 * 60; // = 31536000
    int birthsInOneYear =  secondsInOneYear / 8; // = 3942000
    int deathsInOneYear = secondsInOneYear / 12; // = 2628000
    int immigrantsInOneYear  = secondsInOneYear / 27; // = 1168000
    int populationGrowthInOneYear = birthsInOneYear + immigrantsInOneYear - deathsInOneYear;
    int populationAfterOneYear = currentPopulation  + populationGrowthInOneYear;

cout << "The population in one year: " << populationAfterOneYear;
}