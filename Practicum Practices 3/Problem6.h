#define STATS_H
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class Stats{
    public:
        Stats(){
            data;
        }
        void ReadFile(string filename){
            ifstream infile;
            infile.open(filename);
            string line;
            while(getline(infile, line)){
                data.push_back(line);
            }
        }
        float getAvgStringLength(){
            int total = 0;
            for(int i = 0; i < data.size(); i++){
                total= total + data[i].length();
            }
            return total * 1.0 / data.size();
        }

        string getLongestString(){
            string longest = data[0];
            for(int i = 0; i < data.size(); i++){
                if(data[i].length() >= longest.length()){
                    longest = data[i];
                }
            }
            return longest;
        }

    private:
        vector <string> data;


};