#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
    private:
        Fixed const _x;
        Fixed const _y;
    public:
        Point(void);
        Point(Fixed x, Fixed y);
        Point(Point const &p);
        ~Point(void);

        Fixed   getX(void) const;
        Fixed   getY(void) const;
        Point   operator-(Point const &p);
        Point   &operator=(Point const &p);
        Fixed   distance(Point const &p1, Point const &p2);
        
};

bool    bsp(Point a, Point b, Point c, Point p);

#endif