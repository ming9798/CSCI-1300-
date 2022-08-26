// CS1300 Fall 2020
// Author: Mia Nguyen
// Recitation: 511 - Calista Nguyen
// Homework 5 - Problem 5

#include <iostream>
using namespace std;

int split(string str, char delimiter, string wordArray[], int arrSize) {
   string word = "";
   int j = 0;
   int numberOfWords = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] != delimiter) {
            word = word + str[i];
        }
        else if ( str[i] == delimiter && word.length() > 0) {
            wordArray[j] = word;
            j++;
            word = "";
            continue;
        }
        
        if( i == str.length()-1 && word.length() > 0){
            wordArray[j] = word;
            j++;
            word = "";
        }
    }
    if(j > arrSize) {
        return -1;
    } else {
        return j;
    }
}

int main() {
    string str = "Apples,oranges,bananas";
    char d = ',';
    string wordArray[10] = {"","","","","","","","","",""};
    cout << split(str, d, wordArray, 10);
}