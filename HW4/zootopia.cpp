// CS1300 Fall 2020
// Author: Mia Nguyen
// Recitation: 511 - Calista Nguyen
// Homework 4 - Problem #3

#include <iostream>
using namespace std;

int main() {
    int num;
    double agility;
    double strength;
    double speed;

   do {
    cout << "Select a numerical option:\n=== menu ===\n1. Fox\n2. Bunny\n3. Sloth\n4. Quit\n";
    cin >> num;
       switch(num) {
        case 1 : {
            cout << "Enter agility:\n";
            cin >> agility;
            cout << "Enter strength:\n";
            cin >> strength;
            double hireScore1 = (1.8 * agility) + (2.16 * strength);
            cout << "Hire Score: " << hireScore1 << "\n";
    
        break; }
        
        case 2 : {
            cout << "Enter agility:\n";
            cin >> agility;
            cout << "Enter speed:\n";
            cin >> speed;
            double hireScore2 = (1.8 * agility) + (3.24 * speed);
            cout << "Hire Score: " << hireScore2 << "\n";
        break; }
        case 3 : {
            cout << "Enter strength:\n";
            cin >> strength;
            cout << "Enter speed:\n";
            cin >> speed;
            double hireScore3 = (2.16 * strength) + (3.24 * speed);
            cout << "Hire Score: " << hireScore3 << "\n";
        break; }
        case 4 : {
            cout << "Good bye!";
        break; }
        default : {
            cout << "Invalid";
        }
    }
   } while (num != 4);
   
}