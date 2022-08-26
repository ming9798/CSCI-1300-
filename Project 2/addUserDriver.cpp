#include "User.h"
#include "Book.h"
#include <iostream>
#include <ctype.h>
using namespace std;

int addUser(string username, User users[], int numRatings, int numUsersStored, int usersArrSize){
    int ratings[numRatings];
    if(numUsersStored >= usersArrSize){ //if the array is full
        return -2;
    }
    if(username == ""){ //username is blank
        return -1;
    }
    if(numUsersStored == 0){ //there are no users, so we have to initialize all ratings to 0 and add a user object to the users array
        for(int j = 0; j < numRatings; j++){
            ratings[j] = 0;
        }
        users[numUsersStored] = User(username, ratings, numRatings);
        numUsersStored++;
        return numUsersStored;
        }
    for(int i = 0; i < numUsersStored; i++){
        if(username.compare(users[i].getUsername()) == 0){ //comparing the input username to every username in the array, it equals 0 if there's a match
            return -1; 
        }
        else{
            for(int j = 0; j < numRatings; j++){ 
            ratings[j] = 0;
        }
            users[numUsersStored] = User(username, ratings, numRatings); //add user object to array
            numUsersStored++;
            return numUsersStored;
        }
        }
        if(numUsersStored == usersArrSize){
            return numUsersStored;
        }
    return numUsersStored;
}

int main(){
    User users[1];
    int usersArrSize = 1;
    int numRatings  = 5;

    users[0].setUsername("Ninja");

    // Add 5 ratings given by the user "Ninja"
    for(int i=0; i<numRatings; i++) {
        users[0].setRatingAt(i, i);
    }

    int numUsersStored = 1;

    cout<<addUser("Knuth", users, numRatings, numUsersStored, usersArrSize)<<endl;
}