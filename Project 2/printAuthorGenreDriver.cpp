#include "Book.h"
#include <iostream>
using namespace std;

int printAuthorGenre (string genre, char authorFirstLetter, Book books[], int numBooksStored){
    int pairCount = 0;
    for(int i = 0; i <= numBooksStored; i++){
        if(books[i].getGenre() == genre){ //checks if genre matches with input genre
            string author = books[i].getAuthor(); //the author is equal to the author at the index where the genre matches
            if(author[0] == authorFirstLetter){ //comparing first letter of the author name to the input char
                pairCount++; //increase pair count
            }
        }
    }
    if(pairCount > 0){ //if pairs are found
        cout << "Here is a list of books that match this genre-author pair:" << endl;
        for(int i = 0; i <= numBooksStored; i++){
            if(books[i].getGenre() == genre){
                string author = books[i].getAuthor();
                if(author[0] == authorFirstLetter){
                    cout << books[i].getTitle() << " by " << books[i].getAuthor() << endl; //print out everrry title and author
                }
            } 
        } 
        return pairCount;
    }
    else if(pairCount == 0){
        cout << "No titles found for this genre-author pair." << endl;
        return 0;
        }
}

int main(){
Book books[3];

books[0].setTitle("Calculus1");
books[0].setAuthor("Gottfried Leibniz");
books[0].setGenre("Math");

books[1].setTitle("Calculus2");
books[1].setAuthor("Hottfried Leibniz");
books[1].setGenre("Math");

books[2].setTitle("Calculus3");
books[2].setAuthor("Gottfried Leibniz");
books[2].setGenre("Zath");


cout << printAuthorGenre("Math", 'G', books, 3) << endl;
}