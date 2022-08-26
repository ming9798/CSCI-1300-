#include <iostream>
using namespace std;

int addOddMinusEven(int start, int end) {
    int sumEven = 0;
    int sumOdd= 0;
    
    for(int i = start; i < end; i++) {
        if(i % 2 == 0){
            sumEven = sumEven + i;
        }
        else{
            sumOdd = sumOdd + i;
        }
    }
    return sumOdd - sumEven;
}

int main() {
    int start;
    int end;
    cout << "Enter in start number";
    cin >> start;
    cout << "Enter in end number";
    cin >> end;
    cout << addOddMinusEven(start,end);

}