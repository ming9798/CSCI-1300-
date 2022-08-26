// CS1300 Fall 2020
// Author: Mia Nguyen
// Recitation: 511 - Calista Nguyen
// Homework 4 - Problem #2

#include <iostream>
using namespace std;

int main() {

int num;

    do{
        
        cout << "Select a numerical option:\n=== menu ===\n1. Fox\n2. Bunny\n3. Sloth\n4. Quit\n";
        cin >> num;
        double agility;
        double strength;
        double speed;

        if (num == 1) {
            cout << "Enter agility:\n";
            cin >> agility;
            cout << "Enter strength:\n";
            cin >> strength;
            double hireScore = (1.8 * agility) + (2.16 * strength);
            cout.precision(3);
            cout << fixed << "Hire Score: " << hireScore << "\n";
            }
            else if (num == 2) {
                cout << "Enter agility:\n";
                cin >> agility;
                cout << "Enter speed:\n";
                cin >> speed;
                double hireScore = (1.8 * agility) + (3.24 * speed);
                cout.precision(2);
                cout << fixed << "Hire Score: " << hireScore << "\n";
            }
            else if (num == 3) {
                cout << "Enter strength:\n";
                cin >> strength;
                cout << "Enter speed:\n";
                cin >> speed;
                double hireScore = (2.16 * strength) + (3.24 * speed);
                cout << "Hire Score: " << hireScore << "\n";
            }
            else if (num == 4) {
                cout << "Good bye!";
            }
            else {
                cout << "Invalid option\n";
            }
    } while (num !=4);
    
}