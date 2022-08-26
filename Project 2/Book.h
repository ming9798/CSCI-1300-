#define BOOK_H
#include <iostream>

using namespace std; 

class Book{
    public:
        Book();
        Book(string titleStr, string authorStr, string genreStr);

        string getTitle();
        void setTitle(string titleStr);
        string getAuthor();
        void setAuthor(string authorStr);
        string getGenre();
        void setGenre(string genreStr);

    private:
        string title;
        string author;
        string genre;
};