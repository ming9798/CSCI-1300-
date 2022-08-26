#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string fileName;
    cout << "Enter the file name:" << endl;
    cin >> fileName;
    ifstream inFile;
    inFile.open(fileName);
    if (inFile.fail()) {
        cout << "Could not open file." << endl;
    }
    else{
    
    string line;
    string student;
    int SAT;
    int GPA;
    int demInterest;
    int hsQuaility;
    int sem1;
    int sem2;
    int sem3;
    int sem4;


    int j = 0;
    int size = 100;
    int totalNames = 0;
    string nameArr[size];
    string name = "";

    int m = 0; 
    int n = 0; 
    int scoreArr[size][8];
    string number = "";
    int score;

    string word = "";
    while(getline (inFile, line)) {     

        for (int i = 0; i < line.length(); i++){

            if( line[i] != ',' ) {    
                word = word + line[i];
            }
            
            else if(line[i] == ',') {
                
                if( isdigit(word[0])) {         
                    score = stod(word);         
                    scoreArr[m][n] = score;     
                    //cout<<" scoreArr["<<m<<"]["<<n<<"]: " << scoreArr[m][n] << endl;
                    n++;                      
                   
                }
                else {                          
                    nameArr[j] = word;
                    //cout<<" name: " << nameArr[j] << endl;
                    j++;                        
                    totalNames++;
                }
                
                word = "";
            }

            if ( i == line.length() - 1) {
                if( isdigit(word[0])) {         
                    score = stod(word);         
                    scoreArr[m][n] = score; 
                    //cout<<" scoreArr["<<m<<"]["<<n<<"]: " << scoreArr[m][n] << endl;
                    n++;                        
                }
                else {                          
                    nameArr[j] = word;
                    //cout<<" name: " << nameArr[j] << endl;
                    j++;                    
                }
                word = "";
            } 

        }
        n = 0;
        m++;
        }
        cout << "Results:" << endl;
        for(m = 0; m < totalNames; m++) {
        SAT = scoreArr[m][0];
        GPA = scoreArr[m][1];
        demInterest = scoreArr[m][2];
        hsQuaility = scoreArr[m][3];
        sem1 = scoreArr[m][4];
        sem2 = scoreArr[m][5];
        sem3 = scoreArr[m][6];
        sem4 = scoreArr[m][7];
    
        double totalScore = ((GPA * 2)* .4) + ((SAT / 160) * .3) + (demInterest * .1) + (hsQuaility * .2);
        //cout << "Total Scores: " << totalScore << endl;
        if (totalScore >= 6) {
            cout << nameArr[m] << "," << totalScore << ",score" << endl;
        }
        else if (demInterest == 0 && totalScore >=  5) {
            cout << nameArr[m] << "," << totalScore << ",outlier" << endl;
        }
        else if (((GPA*2) > ((SAT/160) + 2)) && totalScore >= 5) {
            cout << nameArr[m] << "," << totalScore << ",outlier" << endl;
        }
        else if ((sem4 > sem1) && totalScore >= 5) {
            cout << nameArr[m] << "," << totalScore << ",grade improvement" << endl;
    }
    }
    }


}