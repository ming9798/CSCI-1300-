//CS1300
//Authors: Mia Nguyen and Tahira Zafar

#define PLANTS_H
#include <iostream>
using namespace std;

class Plants{
    public:
        Plants();
        Plants(string nameStr, int nutrientsStr, string colorStr, bool isPoisonous);

        string getName();
        void setName(string nameStr);
        int getNutrients();
        void setNutrients(int nutrientsStr);
        string getColor();
        void setColor(string colorStr);
        bool getIsPoisonous();
    

    private:
        string name;
        int nutrients;
        string color;
        bool isPoisonous;
};