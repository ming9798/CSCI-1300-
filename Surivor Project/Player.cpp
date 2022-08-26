#include "Player.h"
#include <iostream>
using namespace std;

    Player::Player()
    {
        user="";
        score=0;
    }
    Player::Player(string u, int s)
    {
        user = u;
        score = s;
    }
    string Player::getUser()
    {
        return user;
    }
    void Player::setUser(string u)
    {
        user = u;
    }
    int Player::getScore()
    {
        return score;
    }
    void Player::setScore(int s)
    {
        score = s;
    }
  