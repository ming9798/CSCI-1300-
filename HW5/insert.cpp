// CS1300 Fall 2020
// Author: Mia Nguyen
// Recitation: 511 - Calista Nguyen
// Homework 5 - Problem 3

#include <iostream>
#include <iomanip>
using namespace std;

int insert(int arr[], int numOfElements, int arrSize, int insertNum) {
    if(arrSize == numOfElements){
        return numOfElements;
    }

    // logic to calculate the position to insert
    int position = 0;
    for (int i = 0; i < numOfElements; i++) {
        if(insertNum >= arr[i]) {
            position = i + 1;
        }    
    }
    
    // increase the number of elements by 1
    numOfElements++;
    
    // shift elements forward
    for (int i = numOfElements - 1; i >= position; i--) {
        arr[i] = arr[i - 1];
    }
    
    // insert x at pos
    arr[position] = insertNum;
    
    return numOfElements;
    
}

void printArray(int arr[], int length) {
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[10] = {5, 10, 15, 20};
    int elements = 4;
    int size = 20;
    int num = 25;
    int numElements = insert(arr, elements, size, num);
    printArray(arr, numElements);
}
