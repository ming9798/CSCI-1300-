#define COFFEE_H
#include <iostream>
using namespace std;

class Coffee{
    private: 
        string roastType;
        float temp;

    public:
        Coffee(){
            roastType = "";
            temp = 180.0;
        }
        Coffee(string roast, float temperature){
            roastType = roast;
            temp = temperature;
        }

        string getRoastType(){
            return roastType;
        }
        void setRoastType(string roast){
            roastType = roast;
        }
        float getTemp(){
            return temp;
        }
        void setTemp(float temperature){
            temp = temperature;
        }
        string drinkability(){
            if(temp < 100.0){
                return "Too Cold";
            }
            if(temp >= 100.0 && temp < 160.0){
                return "Just Right";
            }
            if(temp >= 160.0 && temp < 180.0){
                return "Hot";
            }
            if(temp >= 180.0){
                return "Too Hot";
            }
        }

};