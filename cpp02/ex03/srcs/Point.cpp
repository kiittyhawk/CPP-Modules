#include "Point.hpp"

Point::Point(void) : _x(0), _y(0) {}

Point::Point(Fixed x, Fixed y) : _x(x), _y(y) {}

Point::Point(Point const &p) : _x(p._x), _y(p._y) {}

Point::~Point(void) {}

Fixed   Point::getX(void) const
{
    return (this->_x);
}

Fixed   Point::getY(void) const
{
    return (this->_y);
}

Point   Point::operator-(Point const &p)
{
    return (Point(this->getX() - p.getX(), this->getY() - p.getY()));
}

Point   &Point::operator=(Point const &p)
{
    if (this != &p)
    {
        *(Fixed *)&this->_x = p._x;
        *(Fixed *)&this->_y = p._y;
    }
    return (*this);
}

Fixed   Point::distance(Point const &p1, Point const &p2)
{
    return ((p1.getX() - this->getX()) * (p2.getY() - p1.getY()) - (p2.getX() - p1.getX()) * (p1.getY() - this->getY()));
}
