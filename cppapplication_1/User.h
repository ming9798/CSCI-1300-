#define USER_H
#include <iostream>
using namespace std;

class User{
    private:
        string username;
        int numRatings;
        int size;
        int ratings[50];

    public:
        User();
        User(string name, int ratingArr[], int number);

        string getUsername();
        void setUsername(string name);
        int getRatingAt(int i);
        bool setRatingAt(int i, int value);
        int getNumRatings();
        void setNumRatings(int number);
        int getSize();
        void printArray();

};