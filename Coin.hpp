#pragma once

class Coin
{
private:
    int score;

public:
    Coin(int _score = 0);
    int getScore() const;
    void setScore(int value);
    void displayScore();
};