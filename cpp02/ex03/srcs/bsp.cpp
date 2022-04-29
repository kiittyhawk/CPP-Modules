#include "Point.hpp"

bool    bsp(Point a, Point b, Point c, Point p)
{
    Fixed   dist_ab;
    Fixed   dist_bc;
    Fixed   dist_ca;
    bool    is_neg;
    bool    is_pos;

    dist_ab = p.distance(a, b);
    dist_bc = p.distance(b, c);
    dist_ca = p.distance(c, a);

    is_neg = (dist_ab < 0) || (dist_bc < 0) || (dist_ca < 0);
    is_pos = (dist_ab > 0) || (dist_bc > 0) || (dist_ca > 0);

    return (!(is_neg && is_pos));
}