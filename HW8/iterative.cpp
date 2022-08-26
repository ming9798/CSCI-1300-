//CS1300
//Author: Mia Nguyen
//Recitation: 511 - Calista Nguyen
//Homework 8 - Problem 3

#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

string decimalToBinaryIterative(int num){
  int binary = 0;
  int exponent = 0;
  while(num != 0){
      int remainder = num % 2;
      int m = pow(10, exponent);
      binary += remainder * m;
      num /= 2;
      exponent++;
  }
  string binaryFinal = to_string(binary);
  return binaryFinal;

}

int main(){
    cout << decimalToBinaryIterative(5) << endl;
    cout << decimalToBinaryIterative(10) << endl;
    cout << decimalToBinaryIterative(17) << endl;
    cout << decimalToBinaryIterative(200) << endl;
}