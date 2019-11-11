#include "RTheader.h"

Pixel::Pixel(int r = -1, int g = -1; int b = -1) : red(r), grn(g), blu(b) {}

int Pixel::getCVal(colorEnum e)
{
	if (e == RED) // Case selection is red
		return red;
	if (e == GREEN) // Green
		return grn;
	if (e == BLUE) // Blue
		return blu;
}

void Pixel::setVals(int r, int g, int b)
{
	if (r != NULL)
		red = r;
	if (g != NULL)
		grn = g;
	if (b != NULL)
		blu = b;
}

void Pixel::invert()
{
	// This should be the correct logic
	red = 255 - red;
	grn = 255 - grn;
	blu = 255 - blu;
}