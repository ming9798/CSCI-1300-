//CS1300
//Authors: Mia Nguyen and Tahira Zafar

#include "Plants.h"
#include <iostream>
#include <string>

using namespace std;

    Plants::Plants(){
        name = "";
        nutrients = 0;
        color = "";
    }

    Plants::Plants(string nameStr, int nutrientsStr, string colorStr, bool isPoisonous){
        name = nameStr;
        nutrients = nutrientsStr;
        color = colorStr;
    }

    string Plants::getName(){
        return name;
    }

    void Plants::setName(string nameStr){
        name = nameStr;
    }

    int Plants::getNutrients(){
        return nutrients;
    }

    void Plants::setNutrients(int nutrientsStr){
        nutrients = nutrientsStr;
    }

    string Plants::getColor(){
        return color;
    }

    void Plants::setColor(string colorStr){
        color = colorStr;
    }

    bool Plants::getIsPoisonous(){
        if(color == "red"){
            return true;
        }
        return false;
    }