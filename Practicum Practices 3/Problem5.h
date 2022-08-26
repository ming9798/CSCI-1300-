#define PROBABILITY
#include <iostream>
#include <fstream>
using namespace std;

class Probability{
    public:
        Probability(){
            for(int i = 0; i < 50; i++){
                prob_values[i] = 0.0;
            }
            for(int j = 0; j < 50; j++){
               event[j] = ""; 
            }
        }

        void ReadFile(string filename){
            ifstream infile;
            infile.open(filename);
            string line;
            string words[] = {"", ""};
            int i = 0;
            while(getline(infile, line)){
                split(line, ',', words, 2);
                prob_values[i] = stof(words[1]);
                event[i] = words[0];
                i++;
            }

        }
        string getMostLikelyEvent(float threshold){
            for(int i = 0; i < 50; i++){
                if(prob_values[i] >= threshold){
                    return event[i];
                }
            }
            return "";
        }

    private:    
        float prob_values[50];
        string event[50];

};