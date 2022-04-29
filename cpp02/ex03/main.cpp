#include "Point.hpp"

void bsp_main(Point a, Point b, Point c, Point p)
{
	std::cout << "Point with coordinates (" << p.getX() << ", " << p.getY() << ")";
	if (bsp(a, b, c, p))
		std::cout << " is in the triangle" << std::endl;
	else
		std::cout << " is out of the triangle" << std::endl;
}

int main(void) 
{
	Point a, b, c;
	Point p1, p2, p3, p4, p5;

	a = Point(0, 7);
	b = Point(5, 0);
	c = Point(0, 0);

	std::cout << "Triangle with coordinates ";
	std::cout << "(" << a.getX() << ", " << a.getY() << ")-";
	std::cout << "(" << b.getX() << ", " << b.getY() << ")-";
	std::cout << "(" << c.getX() << ", " << c.getY() << ")" <<std::endl;

	p1 = Point(0, 2);
	p2 = Point(5, 0);
	p3 = Point(1, 2);
	p4 = Point(4.5f, 0);
	p5 = Point(3, 4);

	bsp_main(a, b, c, p1);
	bsp_main(a, b, c, p2);
	bsp_main(a, b, c, p3);
	bsp_main(a, b, c, p4);
	bsp_main(a, b, c, p5);

	a = Point(-10, -10);
	b = Point(-20, 20);
	c = Point(32, -30);

	std::cout << std::endl;
	std::cout << "Triangle with coordinates ";
	std::cout << "(" << a.getX() << ", " << a.getY() << ")-";
	std::cout << "(" << b.getX() << ", " << b.getY() << ")-";
	std::cout << "(" << c.getX() << ", " << c.getY() << ")" <<std::endl;

	p1 = Point(0, 0);
	p2 = Point(-10, 10);
	p3 = Point(21, 20);
	p4 = Point(0, -7);
	p5 = Point(10, -30);

	bsp_main(a, b, c, p1);
	bsp_main(a, b, c, p2);
	bsp_main(a, b, c, p3);
	bsp_main(a, b, c, p4);
	bsp_main(a, b, c, p5);
	
	return 0;
}
