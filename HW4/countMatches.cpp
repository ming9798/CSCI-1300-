// CS1300 Fall 2020
// Author: Mia Nguyen
// Recitation: 511 - Calista Nguyen
// Homework 4 - Problem #4

#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    string substring;
    int count = 0;

    cout << "Enter the search string:\n";
    cin >> word;
    cout << "Enter the substring to be searched:\n";
    cin >> substring;

    for(int i = 0; i <= word.length() - substring.length(); i++) {
        if (word.substr(i , substring.length()) == substring) {
            count++;
        }

    }
    cout << "Number of occurences: " << count;
    
}