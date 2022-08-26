// CS1300 Fall 2020
// Author: Mia Nguyen
// Recitation: 511-Calista Nguyen
// Homework 2 - Problem #6 (Sphere Volume Area

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double inputRadius;
    cout << "Enter a radius:\x0A";
    cin >> inputRadius;

    // Volume Calculations
    double volumeBase = inputRadius;
    double volumeExponent = 3;
    double volumeResult = pow(volumeBase, volumeExponent);
    double volumeFinal = (4.0 / 3.0) * M_PI * volumeResult;

    // Surface Area Calculations
    double surfaceAreaBase = inputRadius;
    double surfaceAreaExponent = 2;
    double surfaceAreaResult = pow(surfaceAreaBase, surfaceAreaExponent);
    double surfaceAreaFinal = 4 * M_PI * surfaceAreaResult;

    cout << "Volume: " << volumeFinal;
    cout << "\x0ASurface area: " << surfaceAreaFinal;
}