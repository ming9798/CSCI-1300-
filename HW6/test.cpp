#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    // READ the file first, on failure return -1
    string fileName = "superheroes_mini.txt";
    ifstream inFile;
    inFile.open(fileName);
    if (inFile.fail()) {
        cout << "Could not open the file. EXIT pogram." << endl;
        
        // TODO: add return -1
        return -1;
    }

    
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


    int j = 0;      // j is the index in nameArr
    int size = 100;
    int totalNames = 0;
    string nameArr[size];
    string name = "";

    int m = 0;      // m is row index in scoreArr
    int n = 0;      // n is column index in scoreArr
    int scoreArr[size][8];
    string number = "";
    int score;

    string word = "";
    // NOTE: while loop handles reading in each line from the file
    while(getline (inFile, line)) {     

        // NOTE: for loop handles parsing each character in a line
        for (int i = 0; i < line.length(); i++){

            if( line[i] != ',' ) {    
                word = word + line[i];
            }
            
            else if(line[i] == ',') {
                // We now have a full word, we need to determine if its a name or number.
                // If word is a name, store it in nameArr.
                // If word is a number, store it in scoreArr.
                
                if( isdigit(word[0])) {         // if block: If the first char of word is a digit, treat the word as a number
                    score = stod(word);         // convert word to int score    ===> TODO: stod will convert a string to an int, how do you handle a float like 2.9 ???       
                    scoreArr[m][n] = score;     // store score into scoreArr
                    cout<<" scoreArr["<<m<<"]["<<n<<"]: " << scoreArr[m][n] << endl;
                    n++;                        // increment the score column n    
                   
                }
                else {                          // else block: treat word as a name
                    nameArr[j] = word;
                    cout<<" name: " << nameArr[j] << endl;
                    j++;                        // increment to name index
                    totalNames++;
                }
                
                // Now that you've stored word into either scoreArr or nameArr, reset it to blank
                word = "";
            }

            // Handle EDGE case at the end of the line, basically repeats logic block from above
            if ( i == line.length() - 1) {
                if( isdigit(word[0])) {         // if block: If the first char of word is a digit, treat the word as a number
                    score = stod(word);         // convert word to int score           
                    scoreArr[m][n] = score;     // store score into scoreArr
                     cout<<" scoreArr["<<m<<"]["<<n<<"]: " << scoreArr[m][n] << endl;
                    n++;                        // increment the score column n  
                }
                else {                          // else block: treat word as a name
                    nameArr[j] = word;
                    cout<<" name: " << nameArr[j] << endl;
                    j++;                        // increment to name index
                }
                
                // Now that you've stored word into either scoreArr or nameArr, reset it to blank
                word = "";
            } 

        }
        // we are done with one line at this point, reset column n to zero, increment the row index m
        n = 0;
        m++;
    }
}