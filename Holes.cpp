
#include <graphics.h>
#include "Holes.hpp"

Holes::Holes(int _x, int _y, int _size, int _color)
{
}

Holes::Holes(Location *_location, int _size, int _color)
{
    location = _location;
    size = _size;
    color = _color;
}

void Holes::draw() const
{

    setfillstyle(SOLID_FILL, color);
    fillellipse(x, y, size, size);
    fillellipse(location->getX(), location->getY(), size, size);
}

Location *Holes::getLocation()
{
    return location;
}

void Holes::setLocation(Location &_location)
{
    *location = _location;
}