// CS1300 Fall 2020
// Author: Mia Nguyen
// Recitation: 511 - Calista Nguyen
// Homework 5 - Problem 1


#include <iostream>
using namespace std;

int main() {

    double temp[10] = {-459.67, -459.67, -459.67, -459.67, -459.67, -459.67, -459.67, -459.67, -459.67, -459.67};
    for (int i =0; i < 10; i++) {
        cout << temp[i] << endl;
    }

    cout << endl;

    string colors[5] = {"Red", "Blue", "Green", "Cyan", "Magenta"};
    for (int i=0; i < 5; i++) {
        cout << colors[i] << endl;
    }

    cout << endl; 

    int sequence[100];
    for(int i = 1; i <= 100; i++) {
        sequence[i] = i;
        cout << sequence[i] << endl;
    }

    cout << endl;

    char lettersLow[26];
    char lettersCap[26];
    for(int i = 0; i < 26; i++) {
        lettersLow[i] = static_cast<char>(65 + i);
        lettersCap[i] = static_cast<char>(97 + i);
        cout << lettersLow[i] << " " << lettersCap[i] << endl;
    }
}