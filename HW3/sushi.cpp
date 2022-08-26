// CS1300 Fall 2020
// Author: Mia Nguyen
// Recitation: 511 - Calista Nguyen
// Homework 3 -  Problem #3

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int sushi;
    cout << "Enter the number of sushi:\x0A";
    cin >> sushi;

    if (0 < sushi && sushi < 10) {
        double sushiPrice = 1.99 * sushi;
        cout << setprecision(2);
        cout << fixed << "Total price: $" << sushiPrice;
    }
        else if (10 <= sushi && sushi <= 19) {
            // discount is 10%
            double sushiPrice = 1.99 * sushi * .90;
            cout << setprecision(2);
            cout << fixed << "Total price: $" << sushiPrice;
    }
        else if (20 <= sushi && sushi <= 49) {
            // discount is 15%
            double sushiPrice = 1.99 * sushi * .85;
            cout << setprecision(2);
            cout << fixed << "Total price: $" << sushiPrice;
    }
        else if (50 <= sushi && sushi <= 99) {
            // discoutn is 20%
            double sushiPrice = 1.99 * sushi * .80;
            cout << setprecision(2);
            cout << fixed << "Total price: $" << sushiPrice;
     }
        else if (100 <= sushi) {
            //discount is 25%
            double sushiPrice = 1.99 * sushi * .75;
            cout << setprecision(2);
            cout << fixed << "Total price: $" << sushiPrice;
    }
        else if (sushi <= 0) {
            cout << "Invalid input";
        }

}