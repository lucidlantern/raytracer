#ifndef RTHEADER_H
#define RTHEADER_H
#include <string>

/* dang ol header file */

const enum colorEnum{RED, GREEN, BLUE};

class pixel
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

#endif