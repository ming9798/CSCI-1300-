#include <iostream>
using namespace std;

int getLastIndex(char ch, string str) {
    int index = -2;
    if(str == "") {
        return -1;
    }
    for(int i = 0; i < str.length(); i++) {
        if(str[i] == ch) {
            index = i;
        }
    }
    return index;
}

int main() {
    string str;
    char ch;
    cout << "Enter string" << endl;
    cin >> str;
    cout << "Enter char" << endl;
    cin >> ch;
    cout << getLastIndex(ch, str);
}