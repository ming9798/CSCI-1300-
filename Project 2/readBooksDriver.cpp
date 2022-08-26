#include <iostream>
#include "Book.h"
#include <fstream>
using namespace std;

int split(string str, char delimiter, string wordArray[], int arrSize) {
   string word = "";
   int j = 0;
   int numberOfWords = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] != delimiter) {
            word = word + str[i];
        }
        else if ( str[i] == delimiter && word.length() > 0) {
            wordArray[j] = word;
            j++;
            word = "";
            continue;
        }
        
        if( i == str.length()-1 && word.length() > 0){
            wordArray[j] = word;
            j++;
            word = "";
        }
    }
    if(j > arrSize) {
        return -1;
    } else {
        return j;
    }
}

int readBooks(string fileName, Book books[], int numBooksStored, int booksArrSize) {
    ifstream inFile;
    inFile.open(fileName);
    string line = "";

    if(numBooksStored >= booksArrSize) { //array is full
        return -2;
    }
    if (inFile.fail()){ //fails to open the file
        return -1;
    }
    char delimiter = ','; 
    string wordArray[3] = {"","",""}; //split function will have three elements (author, title, genre)
    int i = numBooksStored; //books currently stored

    while(getline(inFile, line)){
        string str = line;
        if(str.empty()){ //ignore empty lines
            continue;
        }
        split(str,delimiter,wordArray,3);
        //cout << wordArray[0] << " " << wordArray[1] << " " << wordArray[2] << endl;
        Book book (wordArray[0],wordArray[1],wordArray[2]); //each element in the word array becomes a paramter for the book object
        books[i] = book;
        i++;
        numBooksStored++;

        if( numBooksStored >= booksArrSize) { //return number of books stored once array is filled
            return numBooksStored;
        }
        else {
            continue;
        }

    }

    //cout << "Book Array: " << endl;
    //for(int j = 0; j < totalBooks; j++){
       // cout << "Author: " << books[j].getAuthor() << "   Title: " << books[j].getTitle() << "   Genre: " << books[j].getGenre() << endl;
//}
    return numBooksStored;
}

int main() {
    string fileName = "test.txt"; //I created my own test file
    Book books[10];
    int numbooks = 3;
    int size = 3;
    cout <<readBooks(fileName, books, numbooks, size);
}