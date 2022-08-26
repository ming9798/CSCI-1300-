//CS1300
//Author: Mia Nguyen
//Recitation: 511 - Calista Nguyen
//Homework 8 - Problem 4

#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

string decimalToBinaryRecursive(int num){
  int binary = 0;
  int exponent = 0;
  if(num == 0){
      return "0";
  }
 else{
    binary = num % 2 + 10 * stoi(decimalToBinaryRecursive (num/2));
 }
 string final = to_string(binary);
 return final;
}

int main(){
    cout << decimalToBinaryRecursive(5) << endl;
    cout << decimalToBinaryRecursive(10) << endl;
    cout << decimalToBinaryRecursive(17) << endl;
    cout << decimalToBinaryRecursive(200) << endl;
}