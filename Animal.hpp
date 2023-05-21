#include "Location.hpp"
#pragma once

class Animal
{
private:
    int size;
    int color;
    Location *location;

public:
    Animal(int _size, int _color, Location *_location);
    void _draw(int c) const;
    void draw() const;
    void undraw() const;
    Location *getLocation();
    void setLocation(Location &_location);
    ~Animal();
};