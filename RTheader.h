#ifndef RTHEADER_H
#define RTHEADER_H
#include <string>

/* dang ol header file */

const enum colorEnum{RED, GREEN, BLUE};

class Pixel
{
private:
	int red;
	int grn;
	int blu;

public:
	int getCVal(colorEnum);
	void setVals(int, int, int);
	void invert(); // Invert colors, for funsies
}

class Point
{
	// Points have X, Y, and Z coordinates
}

class Ray
{
	// Rays have a starting position and orientation
	// computePrimRay(i, j, &primRay);
}

#endif