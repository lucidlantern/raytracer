#ifndef RTHEADER_H
#define RTHEADER_H

#include <initializer_list>

/* dang ol header file */

/* Likely not useful
enum colorEnum{RED, GREEN, BLUE};
char *colorNames[] = 
{
	"Red",
	"Green",
	"Blue"
};

*/

struct position
{
	position();
	position(int, int, int);
	position(std::initializer_list<int>);
	position& operator=(const position&);
	int x;
	int y;
	int z;
};

struct direction
{
	direction();
	direction(int, int);
	direction(std::initializer_list<int>);
	direction& operator=(const direction&);
	int xA; // x-angle, 0-359
	int yA; // y-angle, 0-359
};

class ray
{
public:
	ray();
	ray(position, direction); // Only has initializer_list constructor
	void setRayParams(position, direction);
	position getPosition();
	direction getDirection();

private:
	position pos;
	direction dir;
};

class pixel
{
private:
	int red;
	int grn;
	int blu;

	position pos;

public:
	pixel();
	pixel(int, int, int, std::initializer_list<int> p);
	int getCVal(char);
	void setVals(int, int, int);
	void invert(); // Invert colors, for funsies
};

#endif