#include "User.h" 
#include <iostream>
using namespace std;

User::User(){
    username = "";
    numRatings = 5;
    for(int i = 0; i < 50; i++){
        ratings[i] = 0;
    }
}

User::User(string name, int ratingArr[], int number){
    username = name;
    numRatings = number;
    for(int i = 0; i < numRatings; i++){
        ratings[i] = ratingArr[i];
    }
}

string User::getUsername(){
    return username;
}

void User::setUsername(string name){
    username = name;
}

int User::getRatingAt(int i){
    if(i < 0 || i >= 50){
        return -1;
    } 
    else{
        return ratings[i];
    }
}

bool User::setRatingAt(int i, int value){
    if( i<0 || i >= 50){
        return false;
    }
    
    if( value < 0 || value > 5) {
        return false;
    }
    
    ratings[i] = value;
    return true;
}

int User::getNumRatings(){
    return numRatings;
}

void User::setNumRatings(int number){
    numRatings = number;
}

int User::getSize(){
    return size;
}

void User::printArray() {
    cout<<"Rating array:"<<endl;
    for(int i=0; i < numRatings; i++) {
        cout<<ratings[i]<<" "; 
    }
    cout<<endl;
}
