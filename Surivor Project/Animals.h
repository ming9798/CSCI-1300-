//CS1300
//Authors: Mia Nguyen and Tahira Zafar

#define ANIMALS_H
#include <iostream>
using namespace std;

class Animals
{
    private:
    string color;
    double weight;
    int dangerScore;
    string name;

    public:
    Animals();
    Animals(string nameStr, string c, double s, int dS);
    void setColor(string c);
    string getColor();
    void setWeight(double s);
    double getWeight();
    void setDangerScore (int dS);
    int getDangerScore();
    void setName(string nameStr);
    string getName();
};