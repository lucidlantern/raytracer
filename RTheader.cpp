#include "RTheader.h"

/* Struct constructors to define position, direction */
position::position() : x(0), y(0), z(0) {}

position::position(int x, int y, int z) : x(x), y(y), z(z) {}

direction::direction() : xA(0), yA(0) {}

direction::direction(int xA, int yA) : xA(xA), yA(yA) {}

/* Class definition of ray */

// Default constructor
ray::ray() : pos({0, 0, 0}), dir({0, 0}) {}

// Parametricized constructor
ray::ray(position p, direction d) : pos(p), dir(d) {}

void ray::setRayParams(position p, direction d)
{
	pos = p;
	dir = d;
}

position ray::getPosition()
{
	return pos;
}

direction ray::getDirection()
{
	return dir;
}

/* Pixel class definition */

// Default constructor
pixel::pixel() : red(-1), grn(-1), blu(-1), pos({0, 0}) {}

// Default parametricized constructor??? is that what it's called?
pixel::pixel(int r, int g, int b, position p) : red(r), grn(g), blu(b), pos(p) {}

int pixel::getCVal(char s)
{
	if (s == 'r') // Case selection is red
		return red;
	if (s == 'g') // Green
		return grn;
	if (s == 'b') // Blue
		return blu;
}

void pixel::setVals(int r, int g, int b)
{
	red = r;
	grn = g;
	blu = b;
}

void pixel::invert()
{
	// Will invert color of pixel
	return;
}