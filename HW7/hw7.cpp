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

    if(numBooksStored >= booksArrSize) {
        return -2;
    }
    if (inFile.fail()){
        return -1;
    }
    char delimiter = ',';
    string wordArray[3] = {"","",""};
    int i = numBooksStored;

    while(getline(inFile, line)){
        string str = line;
        if(str.empty()){
            continue;
        }
        split(str,delimiter,wordArray,3);
        //cout << wordArray[0] << " " << wordArray[1] << " " << wordArray[2] << endl;
        Book book (wordArray[0],wordArray[1],wordArray[2]);
        books[i] = book;
        i++;
        numBooksStored++;

        if( numBooksStored >= booksArrSize) {
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

   void printAllBooks(Book books[], int numBooks){
    if(numBooks <= 0) {
        cout << "No books are stored" << endl;
    }
    else{
        cout << "Here is a list of books" << endl;
        for(int i = 0; i < numBooks; i++){
        cout << books[i].getTitle() << " by " << books[i].getAuthor() << endl;
        }
    }
}

int main(){
    int num;
    Book books[10];
    int numbooks = 3;
    int size = 3; 
    string filename;

    cout << "======Main Menu=====" << endl;
    cout << "1. Read books" << endl;
    cout << "2. Print all books" << endl; 
    cout << "3. Quit" << endl;
    cin >> num;
   
    if (num == 3){
    cout << "Good bye!";
    } 
    else if (num == 1){
        cout << "Enter a filename: ";
        cin >> filename;
            //int number = readBooks(filename, books, numbooks, size);
        if(readBooks(filename, books, numbooks, size) == -1) {
            cout << "No books saved to the database.";
        }
        else if(readBooks(filename, books, numbooks, size) == -2){
            cout << "Database is already full. No books were added.";
        }
        else if(readBooks(filename, books, numbooks, size) == size){
            cout << "Database is full. Some books may have not been added.";
        }
        else {
        cout << "Total books in the database: " << readBooks(filename, books, numbooks, size);
        }
    }
  else if (num == 2){
    printAllBooks(books,numbooks);
  }
else if(num < 1 && num > 3){
        cout << "Invalid input";
    }
}