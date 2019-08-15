#include <iostream>
#include <cmath>
#include <string>
#include "RTheader.h"

using namespace std;

int main()
{

	/* Basic tests */
	// cout << "TEST: Members of colorEnum are: " << colorEnum[0] << ", " << colorEnum[1]
		// << ", and" << colorEnum[2] << endl;

	cout << "DEBUG: Creating new pixel object." << endl;
	pixel tPx(30, 60, 90, {0, 0});
	cout << "Pixel tPx has red=" << tPx.getCVal('r') << ", grn=" << tPx.getCVal('g')
		<< ", blu=" << tPx.getCVal('b') << endl;

	return 0;
}