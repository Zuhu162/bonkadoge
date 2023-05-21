#include "Holes.hpp"
#include "Location.hpp"
#include "Animal.hpp"
#include "Coin.hpp"
#include <graphics.h>
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <ctime>
#include <stdlib.h>
#include <stdio.h>
#include <cstring>
using namespace std;

int main()
{
    int screenWidth = getmaxwidth();
    int screenHeight = getmaxheight();

    initwindow(screenWidth, screenHeight, "coin test");
    readimagefile("bg.jpg", 0, 0, screenWidth, screenHeight);

    Coin coin;

    Location location(screenWidth / 2, ((screenHeight / 2) + 250));
    Holes hole(&location, 100, COLOR(255, 255, 255));

    hole.draw();

    while (true)
    {
        coin.displayScore();

        Location animalLocation(screenWidth / 2, ((screenHeight / 2) + 250));
        Animal animal(100, COLOR(255, 255, 0), &animalLocation);
        animal.draw();
        if (kbhit())
        {
            animal.undraw();
            hole.draw();
            coin.setScore(coin.getScore() + 1);
            coin.displayScore();
        }
        delay(200);
        animal.undraw();
        hole.draw();
    }
    return 0;
}
