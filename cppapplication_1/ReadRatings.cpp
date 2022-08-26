#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include "User.h"

using namespace std;



int split(string str, char delimiter, string wordArray[], int arrSize) {
    string word = "";
    int j = 0;
    int numberOfWords = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] != delimiter) {
            word = word + str[i];
        }
        
        if ( (str[i] == delimiter && word.length() > 0)  ||
             (i == str.length()-1 && word.length() > 0)  ) {
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


int readRatings(string fileName, User userArr[], int numUsersStored, int usersArrSize, int maxCol){
    ifstream inFile;
    inFile.open(fileName);
    string line = "";

    if(numUsersStored >= usersArrSize){
        return -2;
    }
    if (inFile.fail()){
        return -1;
    }
    char delimiter = ',';
    string wordArray[50];


    int numberOfWords = 0;
    int numberOfRatings = 0;
    while(getline(inFile, line)){
        if(line.empty()){
            continue;
        }
        numberOfWords = split(line,delimiter,wordArray,50);
        
        // first word in wordArray is the name of the user, userName = wordArray[0]
        // wordArray[1] through wordArray[numberOfWords - 1] are ratings
        // numberOfRatings = numberOfWords -1
        // declare ratings array with size = numberOfRatings
        numberOfRatings = numberOfWords -1;
        int ratings[numberOfRatings];
        
        // for loop to assign ratings
        for(int i=0; i < numberOfRatings; i++) {
            ratings[i] = stoi(wordArray[i+1]);
            cout<<"ratings["<<i<<"] "<<ratings[i]<<" ";
        }
        
        User user(wordArray[0], ratings, numberOfRatings);
        userArr[numUsersStored] = user;
        numUsersStored++;

        if(numUsersStored >= usersArrSize){
            return numUsersStored;
        }
        
    }
    
    for(int i=0; i < numUsersStored; i++){
        cout<<"Name: "<<userArr[i].getUsername()<<endl;
    }
    

    return numUsersStored;
}
