#include <iostream>
using namespace std;

bool isAllLower(string str) {
    int num = 0;
    for(int i = 0; i < str.length(); i++)
    if(islower(str[i])) {
        num = num +1;
    }
    if(num == str.length()) {
        return true;
    }
    else {
        return false;
    }
   
}

int main() {
    string str;
    cout << "Enter string" << endl;
    cin >> str;
    cout << isAllLower(str);
}