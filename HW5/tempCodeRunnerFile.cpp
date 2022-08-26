#include <iostream>
#include <iomanip>
using namespace std;

int insert(int arr[], int elements, int size, int num) {
    if(elements ==  size) {
        return size;
    }
    else  {
        for (int i = size-1; arr[i] > num; i--) {
            arr[i] = arr[i-1];

        }
        int i = 0;
        arr[i] = num;
    }
    return elements;
}