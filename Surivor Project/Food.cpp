#include <iostream>
#include <string>
#include "Food.h"
using namespace std;

Food::Food(){
    foodScore = 0;
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<5; j++)
        {
            animals[i][j] = Animals();
            plants[i][j] = Plants();
        }
    }
}

Food::Food(double foodScoreNum, Animals animalsArr[3][5], Plants plantsArr[3][5]){
    foodScore = foodScoreNum;
    for(int m = 0; m < 3; m++){
        for (int n = 0; n < 5; n++){
            animals[m][n] = animalsArr[m][n];
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            plants[i][j] = plantsArr[i][j];
        }
    }
}

double Food::getFoodScore(){
    return foodScore;
}

void Food::setfoodScore(int foodScoreNum){
    foodScore = foodScoreNum;
}

void Food::getAnimals(){
    for(int m = 0; m < 3; m++){
        for(int n = 0; n < 5; n++){
            cout << animals[m][n].getName() << " ";
        }
    }
}

void Food::setAnimals(Animals animalsArr[3][5]){
    for(int m = 0; m < 3; m++){
        for(int n = 0; n < 5; n++){
            animals[m][n] = animalsArr[m][n];
        }
    }
}

void Food::getPlants(){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 5; j++){
            cout << plants[i][j].getName() << " ";
        }
    }
}

void Food::setPlants(Plants plantsArr[3][5]){
     for(int i = 0; i < 3; i++){
        for(int j = 0; j < 5; j++){
            plants[i][j] = plantsArr[i][j];
        }
    }
}

