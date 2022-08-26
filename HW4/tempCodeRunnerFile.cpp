#include <iostream>
#include <string>
using namespace std;

int main() {
    int height;
    cout << "Enter the height:\n";
    cin >> height;
    string alphabet = "abcdefghijklmnopqrstuvwxyza";
    int index = 0;
       for(int i = height; i >= 0; i--) {
        cout << alphabet=.substr(index , i) << endl;  
        index = index + i ;
            
    }

}