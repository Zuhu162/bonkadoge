// Group Project Deliverable 3
// Interim Progress: Implementation of Classes
// GROUP 4
// TEAM BONKERS

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
    char key = 0;
    int keyCodeUpper = 0;

    initwindow(screenWidth, screenHeight, "BONK-A-DOGE");
    readimagefile("bg.jpg", 0, 0, screenWidth, screenHeight);

    while (key != 27)
    {

        setcolor(12);
        settextstyle(BOLD_FONT, HORIZ_DIR, 10);
        bgiout << "BONK A DOGE";
        outstreamxy(300, getmaxheight() / 2 - 200);

        setcolor(15);
        settextstyle(SIMPLEX_FONT, HORIZ_DIR, 7);
        bgiout << "Press any key to play the game";
        outstreamxy(200, getmaxheight() / 2 - 50);
        settextstyle(SIMPLEX_FONT, HORIZ_DIR, 4);
        bgiout << "INSTRUCTIONS : press 'q' 'w' 'e' 'a' 's' 'd' 'z' 'x' 'c' to score when the color changes ";
        outstreamxy(200, getmaxheight() / 2 + 100);
        Coin coin;
        if (kbhit())
        {
            closegraph();
            int screenWidth = getmaxwidth();
            int screenHeight = getmaxheight();
            initwindow(screenWidth, screenHeight, "Bonk A Doge");
            // set seed to 10
            srand(10);

            Location locations[9] = {
                Location(screenWidth / 2, ((screenHeight / 2) + 250)),
                Location(screenWidth / 3, ((screenHeight / 2) + 250)),
                Location(screenWidth / 6, ((screenHeight / 2) + 250)),
                Location(screenWidth / 2, screenHeight / 2),
                Location(screenWidth / 3, screenHeight / 2),
                Location(screenWidth / 6, screenHeight / 2),
                Location(screenWidth / 2, ((screenHeight / 2) - 250)),
                Location(screenWidth / 3, ((screenHeight / 2) - 250)),
                Location(screenWidth / 6, ((screenHeight / 2) - 250)),
            };

            Holes holes[9] = {
                Holes(&locations[0], 100, COLOR(255, 255, 255)), // q
                Holes(&locations[1], 100, COLOR(255, 255, 255)), // w
                Holes(&locations[2], 100, COLOR(255, 255, 255)), // e
                Holes(&locations[3], 100, COLOR(255, 255, 255)), // a
                Holes(&locations[4], 100, COLOR(255, 255, 255)), // s
                Holes(&locations[5], 100, COLOR(255, 255, 255)), // d
                Holes(&locations[6], 100, COLOR(255, 255, 255)), // z
                Holes(&locations[7], 100, COLOR(255, 255, 255)), // x
                Holes(&locations[8], 100, COLOR(255, 255, 255)), // c
            };

            for (int i = 0; i < 9; i++)
            {
                holes[i].draw();
            }

            while (key != 27) // 27 - Esc
            {
                coin.displayScore();

                int randomAnimalIndex = rand() % 9;
                int randomHoleIndex = rand() % 9;

                Location animalLocation(locations[randomHoleIndex].getX(), locations[randomHoleIndex].getY());
                Animal animal(100, COLOR(255, 255, 0), &animalLocation);
                animal.draw();
                if (kbhit())
                {
                    key = getch();
                    keyCodeUpper = toupper(key);

                    if (key == 0) // special keys like arrow keys need to call to getch() twice.
                        key = getch();

                    switch (keyCodeUpper)
                    {
                    case 'Q': // q
                        if (animal.getLocation()->getX() == holes[0].getLocation()->getX() && animal.getLocation()->getY() == holes[0].getLocation()->getY())
                        {
                            animal.undraw();
                            coin.setScore(coin.getScore() + 1);
                            holes[0].draw();
                        }

                        break;
                    case 'W': // w

                        if (animal.getLocation()->getX() == holes[1].getLocation()->getX() && animal.getLocation()->getY() == holes[1].getLocation()->getY())
                        {
                            animal.undraw();
                            coin.setScore(coin.getScore() + 1);

                            holes[1].draw();
                        }
                        break;
                    case 'E': // e

                        if (animal.getLocation()->getX() == holes[2].getLocation()->getX() && animal.getLocation()->getY() == holes[2].getLocation()->getY())
                        {
                            animal.undraw();
                            coin.setScore(coin.getScore() + 1);

                            holes[2].draw();
                        }
                        break;
                    case 'A': // a

                        if (animal.getLocation()->getX() == holes[3].getLocation()->getX() && animal.getLocation()->getY() == holes[3].getLocation()->getY())
                        {
                            animal.undraw();
                            coin.setScore(coin.getScore() + 1);

                            holes[3].draw();
                        }
                        break;
                    case 'S': // s

                        if (animal.getLocation()->getX() == holes[4].getLocation()->getX() && animal.getLocation()->getY() == holes[4].getLocation()->getY())
                        {
                            animal.undraw();
                            coin.setScore(coin.getScore() + 1);

                            holes[4].draw();
                        }
                        break;
                    case 'D': // d

                        if (animal.getLocation()->getX() == holes[5].getLocation()->getX() && animal.getLocation()->getY() == holes[5].getLocation()->getY())
                        {
                            animal.undraw();
                            coin.setScore(coin.getScore() + 1);

                            holes[5].draw();
                        }
                        break;
                    case 'Z': // z

                        if (animal.getLocation()->getX() == holes[6].getLocation()->getX() && animal.getLocation()->getY() == holes[6].getLocation()->getY())
                        {
                            animal.undraw();
                            coin.setScore(coin.getScore() + 1);

                            holes[6].draw();
                        }
                        break;
                    case 'X': // x

                        if (animal.getLocation()->getX() == holes[7].getLocation()->getX() && animal.getLocation()->getY() == holes[7].getLocation()->getY())
                        {
                            animal.undraw();
                            coin.setScore(coin.getScore() + 1);

                            holes[7].draw();
                        }
                        break;
                    case 'C': // c

                        if (animal.getLocation()->getX() == holes[8].getLocation()->getX() && animal.getLocation()->getY() == holes[8].getLocation()->getY())
                        {
                            animal.undraw();
                            coin.setScore(coin.getScore() + 1);

                            holes[8].draw();
                        }
                        break;
                    default:
                        break;
                    }
                }
                delay(200);
                animal.undraw();
                holes[randomHoleIndex].draw();
            }
            return 0;
        }
    }
}
