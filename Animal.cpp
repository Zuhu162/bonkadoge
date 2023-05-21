#include "Animal.hpp"
#include <graphics.h>

Animal::Animal(int _size, int _color, Location *_location)
{
    size = _size;
    color = _color;
    location = _location;
}

void Animal::_draw(int c) const
{
    setcolor(c);
    setfillstyle(SOLID_FILL, c);
    fillellipse(location->getX(), location->getY(), size, size);
}

void Animal::draw() const { _draw(color); }
void Animal::undraw() const { _draw(BLACK); }

Animal::~Animal()
{
    location = nullptr;
}

Location *Animal::getLocation()
{
    return location;
}

void Animal::setLocation(Location &_location)
{
    *location = _location;
}