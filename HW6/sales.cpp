#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include <cctype>

using namespace std;

int readSales(string fileName, string nameArr[], int salesArr[][12], int arrSize) {
    ifstream inFile;
    string line;

    string employeeName;
    int numEmployees = 0;

    int salesNumber;
    int salesAvg;
    int i = 0;

    inFile.open(fileName);

    if (inFile.fail()) {
        return -1;
    }
    else {
    
    string word = "";
    int m = 0;
    int n = 0;
    while (getline(inFile, line) && numEmployees <= arrSize && m < arrSize) {

        if (!isdigit(line[0])) {
            numEmployees++;
            nameArr[i] = line;
            //cout << nameArr[i] << endl;
            i++;
        }
        
        if (isdigit(line[0])) {
            for (int j = 0; j < line.length(); j++) {
                if (line[j] != ',' ) {
                    word = word + line[j];             
                }
                else if ( line[j] == ',' ){     
                    salesNumber = stoi(word);
                    //cout << salesNumber << endl;
                    salesArr[m][n] = salesNumber;
                    word = "";
                    n++;
                }
                
                if ( j == line.length() -1 ){
                    salesNumber = stoi(word);
                    //cout << salesNumber << endl;
                    salesArr[m][n] = salesNumber;
                    word = "";
                    n++;
                } 
            }
            n = 0;
            m++;
        }
        
    }
    
    double sum;
    double ave;
    for(int m=0; m < numEmployees; m++ ) {
        sum = 0;
        ave = 0;
        for(int n=0; n < 12 ; n++) {
            sum = sum + salesArr[m][n];
        }
        ave = sum / 12.0 ;
        cout.precision(1);
        cout << fixed << nameArr[m] << ": " << ave << endl;
    }
    return numEmployees;
    }
}

int main(){
    string fileName = "sales.txt";
    const int SIZE = 100;
    string names[SIZE];
    int sales[SIZE][12];

    int val = readSales(fileName, names, sales, SIZE);
    cout << "return value: " << val << endl;
}