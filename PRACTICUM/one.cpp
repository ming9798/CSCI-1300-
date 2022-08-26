#include <iostream>
using namespace std;

int main() {
    double hours;
    double power;
    double capacity;

    cout << "Enter the number of hours of charging:\n";
    cin >> hours;
    cout << "Enter the solar panel power:\n";
    cin >> power;
    cout << "Enter the battery capacity:\n";
    cin >> capacity;

    double timeToCharge = (power / capacity) * 1.6;
    double batteryCharge = (hours / timeToCharge) * 100;

    if (batteryCharge > 100) {
        cout << "Battery charge: 100";
    }
        else {
            cout << "Battery charge: " << batteryCharge;
        }



}
