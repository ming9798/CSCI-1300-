// CS1300 Fall 2020
// Author: Mia Nguyen
// Recitation: 511 - Calista Nguyen
// Homework 3 -  Problem #6

#include <iostream>
#include <string>
using namespace std;

int main() {

    int scenario;
    cout << "How personalized should the ad be? (1-3)\x0A";
    cin >> scenario;
    if (scenario < 1 || scenario > 3) {
        cout << "Invalid option.";
    }

    string yesOrNo;
    int facebookFriends;
    int zipCode;
    int userAge;

    switch(scenario) {
        case 1 : cout << "Do you own a dog?\x0A";
            cin >> yesOrNo;
            if (yesOrNo == "yes") {
                cout << "Meat's the need of dogs like yours!";
            }
                else if (yesOrNo == "Yes") {
                    cout << "Meat's the need of dogs like yours!";
            }
                else {
                    cout << "Dirty mouth? Clean it up with new Orbit Raspberry Mint.";
             }
        break;
        case 2 : cout << "How many Facebook friends do you have?\x0A";
            cin >> facebookFriends;
            if (facebookFriends >= 500) {
                cout << "Don't like cleaning up after your dog? Call Doody Free to sign up for backyard cleanup or dog walking service.";
            }
                else {
                    cout << "Who doesn't need another cat? Adopt a shelter pet right meow.";
                }
        break;
        case 3 : cout << "What is your zip code?\x0A";
            cin >> zipCode;
            cout << "What is your age?\x0A";
            cin >> userAge;
                if (80301 <= zipCode && zipCode <= 80310 && 25 <= userAge) {
                    cout << "You are surrounded by professional athletes. Up your exercise game in the privacy of your home with a Peloton bike.";
                }
                    else if (80301 <= zipCode && zipCode <= 80310 && userAge < 25) {
                        cout << "Looking for dinner that won't break the bank? Tacos. Come grab a $3 at Centro Latin Kitchen.";
                    }
                    else {
                        cout << "Feeling Uninspired? The Boulder Flatirons are calling. Come hike to inspiring views, delicious food, and enjoy the hospitality of Boulder, CO.";
                    }
        break;

    }

}