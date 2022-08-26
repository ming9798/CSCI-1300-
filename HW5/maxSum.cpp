// CS1300 Fall 2020
// Author: Mia Nguyen
// Recitation: 511 - Calista Nguyen
// Homework 5 - Problem 4

#include <iostream>
using namespace std;

int maxSum(int arr[][10], int rows) {
    int maxArray[rows];
    int sum = 0;
    int i = 0;
    int maximum = -10;
    while (i < rows) {
        for(int j = 0; j < 10; j++) {
            if (arr[i][j] >= maximum) {
                maximum = arr[i][j];
            }
        }
        maxArray[i] = maximum;
        maximum = -10;
        i++;
    }
    for (int i = 0; i < rows; i++) {
        sum+=maxArray[i];
    }
    return sum;
}



int main () {
    int arr[3][10] = {
    {10, 1, 1, 1, 1, 1, 1, 1, 1, 1},
      {2, 2, 2, 2, 2, 2, 2, 2, 2, 20},
      {3, 3, 3, 3, 3, 30, 3, 3, 3, 3}
};
    cout << maxSum(arr, 3);

}