class Book{
    public:
        Book();
        Book(string authorStr, string titleStr, string genreStr);

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

 Book::Book(){
            title = "";
            author = "";
            genre = "";
        }

        Book::Book(string titleStr, string authorStr, string genreStr){
            title = titleStr;
            author = authorStr;
            genre = genreStr;
        }

        string Book::getTitle(){
            return title;
        }

        void Book::setTitle(string titleStr){
            title = titleStr;
        }

        string Book::getAuthor(){
            return author;
        }

        void Book::setAuthor(string authorStr){
            author = authorStr;
        }

        string Book::getGenre(){
            return genre;
        }
        
        void Book::setGenre(string genreStr){
            genre = genreStr;
        }


class User{
    private:
        string username;
        int numRatings;
        int size;
        int ratings[50];

    public:
        User();
        User(string name, int ratingArr[], int number);

        string getUsername();
        void setUsername(string name);
        int getRatingAt(int i);
        bool setRatingAt(int i, int value);
        int getNumRatings();
        void setNumRatings(int number);
        int getSize();

};

User::User(){
    username = "";
    numRatings = 0;
    for(int i = 0; i < 50; i++){
        ratings[i] = 0;
    }
}

User::User(string name, int ratingArr[], int number){
    username = name;
    numRatings = number;
    for(int i = 0; i < numRatings; i++){
        ratings[i] = ratingArr[i];
    }
}

string User::getUsername(){
    return username;
}

void User::setUsername(string name){
    username = name;
}

int User::getRatingAt(int i){
    if(i < 0 || i >= 50){
        return -1;
    } 
    else{
        return ratings[i];
    }
}

bool User::setRatingAt(int i, int value){
      if(i < 50 && i >= 0 && value >= 0 && value <= 5){
          ratings[i] = value;
          return true;
      }
      else{
          return false;
      }
}

int User::getNumRatings(){
    return numRatings;
}

void User::setNumRatings(int number){
    numRatings = number;
}

int User::getSize(){
    return size;
}

int readBooks(string fileName, Book books[], int numBooksStored, int booksArrSize){
    ifstream inFile;
    inFile.open(fileName);
    string line = "";

    if (numBooksStored >= booksArrSize){
      return -2;
    }
    if (inFile.fail()){
      return -1;
    }
    char delimiter = ',';
    string wordArray[3] = {"", "", ""};
    int i = numBooksStored;

    while (getline(inFile, line)){
      string str = line;
      if (str.empty()){
        continue;
      }
      split(str, delimiter, wordArray, 3);
      //cout << wordArray[0] << " " << wordArray[1] << " " << wordArray[2] << endl;
      Book book(wordArray[0], wordArray[1], wordArray[2]);
      books[i] = book;
      i++;
      numBooksStored++;

      if (numBooksStored >= booksArrSize){
        return numBooksStored;
      }
      else
      {
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
    if (numBooks <= 0){
      cout << "No books are stored" << endl;
    }
    else{
        cout << "Here is a list of books" << endl;
          for (int i = 0; i < numBooks; i++){
            if(books[i].getTitle() == ""){
              continue;
            }
            cout << books[i].getAuthor() << " by " << books[i].getTitle() << endl;
        }
    }
}

int countGenre(string genre, Book books[], int numBooksStored){
    int genreCount = 0;
    for (int i = 0; i <= numBooksStored; i++){
        if (books[i].getGenre() == genre){
            genreCount++;
        }
    }
    if (genreCount == 0){
        return 0;
    }
    else{
        return genreCount;
    }
}

int printAuthorGenre(string genre, char authorFirstLetter, Book books[], int numBooksStored{
    int pairCount = 0;
    for (int i = 0; i <= numBooksStored; i++){
        if (books[i].getGenre() == genre){
            string author = books[i].getAuthor();
            if (author[0] == authorFirstLetter){
              pairCount++;
            }
        }
    }
    if (pairCount > 0){
      cout << "Here is a list of books that match this genre-author pair:" << endl;
      for (int i = 0; i <= numBooksStored; i++){
        if (books[i].getGenre() == genre){
          string author = books[i].getAuthor();
            if (author[0] == authorFirstLetter){
              cout << books[i].getTitle() << " by " << books[i].getAuthor() << endl;
            }
        }
      }
      return pairCount;
    }
    else if (pairCount == 0){
      cout << "No titles found for this genre-author pair." << endl;
      return 0;
  }
}

int addUser(string username, User users[], int numRatings, int numUsersStored, int usersArrSize){
    int ratings[numRatings];
    if (numUsersStored >= usersArrSize){
        return -2;
    }
    if (username == ""){
        return -1;
    }
    if (numUsersStored == 0){
        for (int j = 0; j < numRatings; j++){
            ratings[j] = 0;
        }
        users[numUsersStored] = User(username, ratings, numRatings);
        numUsersStored++;
        return numUsersStored;
    }
    for (int i = 0; i < numUsersStored; i++)
    {
        if (username.compare(users[i].getUsername()) == 0)
        {
            return -1;
        }
        else
        {
            for (int j = 0; j < numRatings; j++)
            {
                ratings[j] = 0;
            }
            users[numUsersStored] = User(username, ratings, numRatings);
            numUsersStored++;
            return numUsersStored;
        }
    }
    if (numUsersStored == usersArrSize)
    {
        return numUsersStored;
    }
    return numUsersStored;
}

int readRatings(string fileName, User userArr[], int numUsersStored, int usersArrSize, int maxCol)
{
    ifstream inFile;
    inFile.open(fileName);
    string line = "";

    if (numUsersStored >= usersArrSize)
    {
        return -2;
    }
    if (inFile.fail())
    {
        return -1;
    }
    char delimiter = ',';
    string wordArray[51];

    int numberOfWords = 0;
    int numberOfRatings = 0;

    while (getline(inFile, line))
    {
        if (line.empty())
        {
            continue;
        }
        numberOfWords = split(line, delimiter, wordArray, 51);

        numberOfRatings = numberOfWords - 1;
        int ratings[numberOfRatings];

        for (int i = 0; i < numberOfRatings; i++)
        {
            ratings[i] = stoi(wordArray[i + 1]);
            //cout << "ratings["<<i<<"] "<<ratings[i]<<" ";
        }

        User user(wordArray[0], ratings, numberOfRatings);
        userArr[numUsersStored] = user;
        numUsersStored++;

        if (numUsersStored >= usersArrSize)
        {
            return numUsersStored;
        }
    }

    return numUsersStored;
}

int getRating(string username, string bookTitle, User users[], Book books[], int numUsers, int numBooks)
{

    for (int i = 0; i < username.length(); i++)
    {
        username[i] = toupper(username[i]);
    }

    for (int i = 0; i < bookTitle.length(); i++)
    {
        bookTitle[i] = toupper(bookTitle[i]);
    }

    int userFoundIndex = -1;
    for (int i = 0; i < numUsers; i++)
    { //traverse user array
        string name = users[i].getUsername();
        for (int j = 0; j < users[i].getUsername().length(); j++)
        { //traverse each element in array
            name[j] = toupper(name[j]);
        }
        // Use the compare function of string, if str1.compare(str2) == 0 , the string are equal (the same)
        if (username.compare(name) == 0)
        {
            userFoundIndex = i;
            break;
        }
    }

    int bookFoundIndex = -1;
    for (int i = 0; i < numBooks; i++)
    {
        string book = books[i].getTitle();
        for (int j = 0; j < books[i].getTitle().length(); j++)
        {
            book[j] = toupper(book[j]);
        }

        // Use the compare function of string, if str1.compare(str2) == 0 , the string are equal (the same)
        if (bookTitle.compare(book) == 0)
        {
            bookFoundIndex = i;
            break;
        }
    }

    if (userFoundIndex < 0 || bookFoundIndex < 0)
    {
        return -3;
    }
    else
    {
        int rating = users[userFoundIndex].getRatingAt(bookFoundIndex);
        return rating;
    }
}

int getUserStats(string username, User users[], int numUsers, int numBooks)
{
    int sum = 0;
    int counter = 0;
    for (int i = 0; i < numUsers; i++)
    {
        if (username.compare(users[i].getUsername()) == 0)
        {
            if (users[i].getNumRatings() == 0)
            {
                cout << username << " has not rated any books." << endl;
                return 0;
            }

            for (int j = 0; j < users[i].getNumRatings(); j++)
            {
                sum = sum + users[i].getRatingAt(j);
                if (users[i].getRatingAt(j) != 0)
                {
                    counter++;
                }
            }
            double average = sum / (counter * 1.00);

            cout << username << " rated " << counter << " books" << endl;
            cout.precision(2);
            cout << fixed << username << "'s average rating was " << average << endl;
            return 1;
        }
    }
    for (int i = 0; i < numUsers; i++)
    {
        if (username != users[i].getUsername())
        {
            cout << username << " does not exist." << endl;
            return -3;
        }
    }
}

int main()
{
    int num;
    Book books[50];
    User users[100];
    int numBooksStored;
    int numBooks;
    string genre;
    char authorFirstLetter;
    string username;
    int numRatings;
    int numUsersStored;
    string title;
    int numUsers;
    string filename;

    do
    {
        cout << "Select a numerical option: " << endl;
        cout << "======Main Menu=====" << endl;
        cout << "1. Read books from file" << endl;
        cout << "2. Print all books" << endl;
        cout << "3. Book-count by genre" << endl;
        cout << "4. Filter books by genre, author" << endl;
        cout << "5. Add user" << endl;
        cout << "6. Read ratings" << endl;
        cout << "7. Get rating" << endl;
        cout << "8. Get user statistics" << endl;
        cout << "9. Quit" << endl;
        cin >> num;

        switch (num)
        {
        case 1:
        {
            cout << "Enter a book file name:" << endl;
            cin >> filename;
            int readBooksResults = readBooks(filename, books, numBooksStored, 50);
            if (readBooksResults == -1)
            {
                cout << "No books saved to the database." << endl;
            }
            if (readBooksResults == 50)
            {
                cout << "Database is full. Some books may have not been added." << endl;
            }
            if (readBooksResults > 0 && readBooksResults < 50)
            {
                cout << "Total books in the database: " << readBooksResults << endl;
            }

            break;
        }

        case 2:
        {
            printAllBooks(books, 50);
            break;
        }

        case 3:
        {
            cout << "Enter the genre:" << endl;
            cin.ignore();
            getline(cin,genre);
            cout << "Total " << genre << " books in the database: " << countGenre(genre, books, 50) << endl;
            break;
        }

        case 4:
        {   
            
            cout << "Enter the genre:" << endl;
            cin.ignore();
            getline(cin,genre);
            cout << "Enter first char of author name:" << endl;
            cin >> authorFirstLetter;
            int printAuthorGenreResults = printAuthorGenre(genre, authorFirstLetter, books, 50);
            cout << "Number of titles found for this filter: " << printAuthorGenreResults << endl;
            break;
        }

        case 5:
        {
            cout << "Enter a user name:" << endl;
            cin.ignore();
            getline(cin,username);
            int addUserResults = addUser(username, users, numRatings, numUsersStored, 100);
            if (addUserResults == -2)
            {
                cout << "Database is already full. User cannot be added." << endl;
            }
            if (addUserResults == -1)
            {
                cout << "User already exists or the username is empty." << endl;
            }
            if (addUserResults >= 0)
            {
                cout << "Welcome, " << username << "!" << endl;
            }
            break;
        }

        case 6:
        {
            cout << "Enter the ratings file name:" << endl;
            getline(cin, filename);
            int readRatingsResults = readRatings(filename, users, numUsersStored, 100, 50);
            if (readRatingsResults == -1)
            {
                cout << "No ratings saved to the database.";
            }
            if (readRatingsResults == -2)
            {
                cout << "Database is already full. No ratings were added.";
            }
            if (readRatingsResults >= 0)
            {
                cout << "Total users in the database: " << readRatingsResults;
            }
            break;
        }

        case 7:
        {
            cout << "Enter a user name:" << endl;
            getline(cin,username);
            cin.ignore();
            cout << "Enter a book title:" << endl;
            getline(cin,title);
            int getRatingResults = getRating(username, title, users, books, numUsers, numBooks);
            if (getRatingResults == -3)
            {
                cout << username << " or " << title << " does not exist." << endl;
            }
            cout << username << " rated " << title << " with " << getRatingResults;
            break;
        }

        case 8:
        {
            cout << "Enter a user name:" << endl;
            cin.ignore();
            getline(cin,username);
            getUserStats(username, users, numUsers, numBooks);
            break;
        }
        }
        if (num < 1 || num > 9)
        {
            cout << "Invalid input." << endl;
        }
         if (num == 9)
    {
        cout << "Good bye!" << endl;
    }
    } while (num != 9);

}