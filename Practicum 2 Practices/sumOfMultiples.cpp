#include <iostream>
using namespace std;

int sumOfMultiples(int seed, int cap) {
    int sum = 0;
    for (int i = 0; i <= cap; i++) {
        if(i % seed == 0){
            sum = sum + i;
        }
        
    }
    return sum;
}

int main() {
    int seed;
    int cap;
    cout << "Seed: " << endl;
    cin >> seed;
    cout << "Cap: " << endl;
    cin >> cap;
    cout << sumOfMultiples(seed, cap);

}