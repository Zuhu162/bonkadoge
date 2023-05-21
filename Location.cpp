#include "Location.hpp"

int Location::getX() const
{
    return x;
}

void Location::setX(int _x)
{
    x = _x;
}

int Location::getY() const
{
    return y;
}

void Location::setY(int _y)
{
    y = _y;
}

Location::Location(int _x, int _y)
{
    x = _x;
    y = _y;
}

void Location::setLocation(int _x, int _y)
{
    x = _x;
    y = _y;
}