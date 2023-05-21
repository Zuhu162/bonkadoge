#include "Coin.hpp"
#include <graphics.h>

/* void drawCircle(int x, int y, int radius, int color, int fillStyle)
{
} */

Coin::Coin(int _score)
{
    score = _score;
}

int Coin::getScore() const { return score; }
void Coin::setScore(int value)
{
    score = value;
}

// Coin::Coin()
// {
//     score = 0;
// }

// void Coin::draw() const
// {
//     setfillstyle(SOLID_FILL, color);
//     fillellipse(x, y, size, size);
//     fillellipse(location->getX(), location->getY(), size, size);
// }

void Coin::displayScore()
{
    // Points
    readimagefile("coin.jpg", getmaxwidth() * 0.68, 10, getmaxheight() * 0.95, 100);
    setcolor(12);
    settextstyle(EUROPEAN_FONT, HORIZ_DIR, 2);
    bgiout << "POINTS";
    outstreamxy(getmaxwidth() * 0.91, getmaxheight() * 0.1);
    // Points Counter
    settextstyle(EUROPEAN_FONT, HORIZ_DIR, 3);
    bgiout << score;
    outstreamxy(getmaxwidth() * 0.93, getmaxheight() * 0.05);
}