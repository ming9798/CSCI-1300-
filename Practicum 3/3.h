#define COUNTRY_H
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class Country{
    private:
        string countries[50];
        string capitals[50];
    public:
        Country(){
            for(int i = 0; i < 50; i ++){
                countries[i] = "";
                capitals[i] = "";
            }
        }

        int LoadCountry(string filename){
            ifstream infile;
            infile.open(filename);
            if(infile.fail()){
                return -1;
            }
            string line;
            string words[2] = {"", ""};
            int i = 0;
            while(getline(infile, line)){
                split(line, ',', words, 2);
                countries[i] = words[0];
                capitals[i] = words[1];
                i++;
            }
            return 0;
        }
        int SearchForCountry(string country){
            for(int i = 0; i < 50; i++){
                if(countries[i] == country){
                    return i;
                }
            }
            return -1;
        }
        string GetCapital(string country){
            for(int i = 0; i < 50; i++){
                if(countries[i] == country){
                    return capitals[i];
                }
            }
            return "";

        }
};