#include <iostream>
#include "Book.h"
#include <fstream>
using namespace std;

int main(){
    string author = "Cassandra Clare";
    string title = "City of Bones";
    string genre = "Fantasy";
    Book b1 = Book(author, title, genre);
    cout << "Book Title: " << b1.getTitle() << endl; 
    cout << "Author: " << b1.getAuthor() << endl;
    cout << "Genre: " << b1.getGenre() << endl;
    b1.setTitle("City of Glass");
    b1.setAuthor("Cassie Clare");
    cout << "Book Title: " << b1.getTitle() << endl; 
    cout << "Author: " << b1.getAuthor() << endl;
    cout << "Genre: " << b1.getGenre() << endl;
}