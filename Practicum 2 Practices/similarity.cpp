#include <iostream>
using namespace std;

bool similarity (int arr1[], int size1, int arr2[], int size2) {
    int num = 0;
    if(size1 != size2) {
        return false;
    }
    else{
        for (int i = 0; i < size1; i++) {
            if(arr1[i] == arr2[i]) {
                num = num + 1;
            }
        }
    }
    if(num != size1) {
        return false;
    }
    else{
        return true;
    }
    
}