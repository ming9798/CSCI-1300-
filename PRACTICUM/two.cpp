#include <iostream>
using namespace std;

int main() {
    int suit;
    cout << "Enter Suit:\n";
    cin >> suit;

    switch(suit) {
       case 0 : 
            cout << "Suit 0: Clubs";

        break;
        case 1 :
            cout << "Suit 1: Diamonds";
        break;
        case 2 :
            cout << "Suit 2: Spades";
        break;
        case 3 :
            cout << "Suit 3: Hearts";
        break;
        default :
            cout << "Suit " << suit << ": Invalid";
    }
}
