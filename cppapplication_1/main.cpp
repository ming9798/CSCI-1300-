/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: nguyend
 *
 * Created on October 29, 2020, 8:22 AM
 */

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include "User.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    cout<<"Hello world"<<endl;
    int size = 5;
    int rating[size] = {1,2,3,4,5};
    User user1("LeBron", rating, size);
     
    user1.setRatingAt(0, 7);
    cout<<"User1 name: "<<user1.getUsername()<<"  rating[0]: "<<user1.getRatingAt(0)<<endl;
    user1.printArray();
    
     
    User user2;
    user2.setUsername("Kobe");
    user2.setRatingAt(3, 9);
    cout<<"User2 name: "<<user2.getUsername()<<"  rating[3]: "<<user2.getRatingAt(3)<<endl;
    user2.printArray();
    
    cout<<"Goodbye world"<<endl;
    return 0;
}

