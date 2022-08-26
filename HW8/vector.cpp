//CS1300
//Author: Mia Nguyen
//Recitation: 511 - Calista Nguyen
//Homework 8 - Problem 1

#include <iostream>
#include <vector>

using namespace std;


int main() {
    int num;
    vector<int> myvector;
    while(num != -1){
        cout << "Please enter a number:" << endl;
        cin >> num;

        if((myvector.size() == 1) && (num % 5 == 0) && (num % 3 == 0)){
            myvector.pop_back();
        }
        if(!myvector.empty() && (num % 5 == 0) && (num % 3 == 0)){
            myvector.erase (myvector.begin());
            myvector.pop_back();
        }
        else if( !myvector.empty() && (num % 5 == 0) ){
            myvector.erase (myvector.begin());
        }
        else if( !myvector.empty() && (num % 3 == 0) ){
            myvector.pop_back();
        }
        else if(num == 0 || num < -1){
            cout << "The number should be a positive integer or -1." << endl;
        }
        else if(num != -1){
            myvector.push_back (num);
        }
    }
    if(myvector.empty() && num == -1){
        cout << "The vector is empty." << endl;
    }
    else if(!myvector.empty() && num == -1){
        cout << "The elements in the vector are: ";
        int size = myvector.size();
        int max = 0;
        int min = 10000;
        for(int i =0; i < size; i++ ){
            cout << myvector.at(i) << " ";
            if(myvector.at(i) >= max){
                max = myvector.at(i);
            }
            if(myvector.at(i) <= min){
                min = myvector.at(i);
            }
        }
            cout << endl << "Min = " << min << endl;
            cout << "Max = " << max;
    }
}