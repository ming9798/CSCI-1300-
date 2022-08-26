#include <iostream> 
using namespace std; 

//Use this template to implement MatrixSum exercise 3 in the writeup
//More details about the question is in the write up.

void MatrixSum(int a[2][3], int b[2][3]){
    //implement function here
    //This function sums up each index at a and b and prints the sums out in two rows
    int c[2][3];
    for(int i =0; i < 2; i++) {
        for(int j = 0; j < 3; j++){
            c[i][j] = a[i][j] + b[i][j];
            cout << c[i][j];
        }
        cout << endl;
    }

     //TODO: Write function implementation: 
}

int main(){
    int a[2][3];
    int b[2][3]; 

    for (int i = 0; i < 2; i++){
        for(int j =0; j < 3; j++) {
            cout << "Enter a value for A" << endl;
            cin >> a[i][j];
            cout << "Enter a value for B" << endl;
            cin >> b[i][j];
        }
    }
    //TODO: Have the user input values for arrays a and b here

    MatrixSum(a, b); //this is the function call for a and b.  
}

//HINTS: 
//remember to use nested for loops when traversing through a 2D array.