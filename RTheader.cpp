#include "RTheader.h"

pixel::pixel(int r = -1, int g = -1; int b = -1) : red(r), grn(g), blu(b) {}

int pixel::getCVal(colorEnum e)
{
	if (e == RED) // Case selection is red
		return red;
	if (e == GREEN) // Green
		return grn;
	if (e == BLUE) // Blue
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

}