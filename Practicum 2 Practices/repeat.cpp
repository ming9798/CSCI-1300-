#include <iostream>
using namespace std;

string repeat(string str, int n){
    string word;
    for (int i = 0; i < n; i++) {
        word = word + str;
    }
    return word;
}

int main(){
    string str;
    int num;
    cout << "Enter word: " << endl;
    cin >> str;
    cout << "Enter number:" << endl;
    cin >> num;
    cout << repeat(str,num);

}