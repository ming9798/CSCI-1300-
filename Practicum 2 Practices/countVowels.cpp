#include <iostream>
#include <string>
using namespace std;

int countVowels(string str){
    int num = 0;
    if(str == ""){
        return -1;
    }
    for(int i = 0; i < str.length(); i++){
        if(str[i] == 'A' || str[i] == 'E'|| str[i] == 'I' || str[i] == 'O' || str[i] == 'U' ||
                str [i] == 'a'|| str[i] == 'e'|| str[i] == 'i' || str[i] == 'o' || str[i] =='u') {
               num = num + 1 ;
        }
    }
    return num;

}

int main() {
    string str;
    cout << "Enter a string" << endl;
    cin >> str;
    cout << countVowels(str);

}