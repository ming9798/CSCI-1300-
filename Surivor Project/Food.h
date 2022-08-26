#define FOOD_H
#include <iostream>
#include <string>
#include "Plants.h"
#include "Animals.h"
using namespace std;

class Food{
public:
    Food();
    Food(double foodScoreNum, Animals animalsArr[3][5], Plants plantsArr[3][5]);

    double getFoodScore();
    void setfoodScore(int foodScoreNum);
    void getAnimals();
    void setAnimals(Animals animalsArr[3][5]);
    void getPlants();
    void setPlants(Plants plantsArr[3][5]);

private:
    double foodScore;
    Animals animals[3][5];
    Plants plants[3][5];

};