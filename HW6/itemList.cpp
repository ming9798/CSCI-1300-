#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string fileName;
    ifstream inFile;

    cout << "Enter the file name:\n";
    cin >> fileName;

    inFile.open(fileName);

    string line;
    string mostExp = "";
    string leastExp = "";
    double mostPrice = 0;
    double leastPrice = 100000;

    int lineCount = 0;
    if(inFile.fail()) {
        cout << "Could not open file." << endl;
    }
    else {
        while (getline (inFile, line)) {
        for (int i=0; i < line.length(); i++) {
            if(line[i] == ',') {
                string product = line.substr(0,i);
                double price = stod(line.substr(i+1));
                if(price > mostPrice) {
                    mostPrice = price;
                    mostExp = product;
                }
                if (price < leastPrice) {
                    leastPrice = price;
                    leastExp = product;
                }          
            }
                    
        }
        if(!line.empty()){
            lineCount++;
        }
    }

    cout << "The number of lines: " << lineCount << endl; 
    cout << "The most expensive product: " << mostExp << endl;
    cout << "The least expensive product: " << leastExp;

    }
        
}