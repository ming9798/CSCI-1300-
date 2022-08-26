#include <iostream>
#include <cmath>
using namespace std;

void sphereVolume(double radius) {
double volume = ( 4 * M_PI * pow(radius,3) ) / 3;
cout << "volume: " << volume;
}

int main() {
    double radius;
    cout <<"Enter radius:" << endl;
    cin >> radius;
    sphereVolume(radius);
}