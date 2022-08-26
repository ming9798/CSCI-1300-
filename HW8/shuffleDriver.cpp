//CS1300
//Author: Mia Nguyen
//Recitation: 511 - Calista Nguyen
//Homework 8 - Problem 2

#include <iostream>
#include <vector>
using namespace std;

vector<int> shuffle(vector<int> v1, vector<int> v2){
    vector<int> v3;
    if(v1.size() < v2.size()){
        vector<int> vec = v1;
        v1 = v2;
        v2 = vec;
    }
    for(int i = 0; i < v1.size(); i++){
        v3.push_back(v1[i]);
        if (i < v2.size()) {
            v3.push_back(v2[i]);
        }
    }
    return v3;
}

int main(){
    vector<int> v1{1,3,5,9};
    vector<int> v2{2,4,6,8,10};
    vector<int> v3 = shuffle(v1,v2);
    for (int i=0; i < v3.size(); i++) {
        cout << v3[i] << " ";
}
}