#include "User.h"
#include <iostream>
#include <fstream>
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
    string wordArray[51]; //max 50 ratings + one username

    int numberOfWords = 0;
    int numberOfRatings = 0;

    while(getline(inFile, line)){
        if(line.empty()){
            continue;
        }
        numberOfWords = split(line,delimiter,wordArray,51); //split the line from the user and their ratings, total number of words in that line
    
        numberOfRatings = numberOfWords - 1; //the number of ratings is total number of words minus the one user name
        int ratings[numberOfRatings]; //size of the ratings array

        for(int i = 0; i < numberOfRatings; i++){
            ratings[i] = stoi(wordArray[i+1]);
            //cout << "ratings["<<i<<"] "<<ratings[i]<<" ";
        }

        User user(wordArray[0], ratings, numberOfRatings);
        userArr[numUsersStored] = user;
        numUsersStored++;

        if(numUsersStored >= usersArrSize){
            return numUsersStored;
        }
    }

return numUsersStored;
}

int main(){
// check if we can call the function
User users[100];

int numUsers = 0;
int usersArrSize = 2;
int maxColumns = 50;

readRatings("ratings.txt", users, numUsers, usersArrSize, maxColumns);
cout << "checking if we can call the function" << endl;
}