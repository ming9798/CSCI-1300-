#include <iostream>
#include "Planet.h"
using namespace std;

int maxRadius(Planet planets[], int size){
    double largestRadius = 0;
    int index = -1;
    for(int i = 0; i < size; i++) {
        if (planets[i].getRadius() > largestRadius) {
            largestRadius = planets[i].getRadius();
            index = i;
        }
    }
return index;  
}