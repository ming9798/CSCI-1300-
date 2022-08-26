#define DOGPROFILE_H
#include <iostream>
using namespace std;

class DogProfile{
    private:
        string name;
        string temperament;
        float bitingProbability;
    public:
        DogProfile(){
            name = "Fido";
            temperament = "always wags tail";
            bitingProbability = -100;
        }
        DogProfile(string n, string t, float bP){
            name = n;
            temperament = t;
            bitingProbability = bP;
        }
        void setName(string n){
            name = n;
        }
        string getName(){
            return name;
        }
        void setTemperament(string t){
            temperament = t;
        }
        string getTemperament(){
            return temperament;
        }
        void setBitingProbability(float bP){
            bitingProbability = bP;
        }
        float getBitingProbability(){
            return bitingProbability;
        }
        string goodBoy(){
            if(bitingProbability <= 1000.0){
                return "Good Boy";
            }
            if(bitingProbability > 1000.0){
                return "Bad Boy";
            }
        }

};