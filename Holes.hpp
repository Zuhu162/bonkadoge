#include "Location.hpp"

#ifndef HOLES_H
#define HOLES_H

class Holes
{
private:
    int x, y;
    int size;
    int color;
    Location *location;

public:
    Holes(int _x, int _y, int _size, int _color);
    Holes(Location *_location = nullptr, int _size = 1, int _color = 0);
    void draw() const;
    Location *getLocation();
    void setLocation(Location &_location);
};
#endif