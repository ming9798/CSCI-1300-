#define PLAYER_H
#include <iostream> 
using namespace std;

class Player
{
    private:
    string user;
    int score;

    public:
    Player();
    Player(string u, int s);
    string getUser();
    void setUser(string u);
    int getScore();
    void setScore(int s);


};