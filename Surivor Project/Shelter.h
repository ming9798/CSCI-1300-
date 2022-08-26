//CS1300
//Authors: Mia Nguyen and Tahira Zafar

#define SHELTER_H
#include <iostream>

using namespace std;

class Shelter{
    public:
        Shelter();
        Shelter(string materialStr, int minigameScore);

        string getMaterial();
        void setMaterial(string materialStr);
        int getStrength();
        void setStrength(int minigameScore);

    private:
        string material;
        int strength;

};