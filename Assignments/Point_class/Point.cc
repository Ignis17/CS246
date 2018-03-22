// This program calculates the distance between two points as well as
// its midpoint.
// Name: Joel Turbi
// Course: CS246
// Assignment: 2A & 2B
// Due: 03-01-18
#include <iostream>
#include <cstdlib>
#include <cmath> // Needed for math library.
#include "Point.h"
#define NDEBUG
#include <cassert>
using namespace std;

// This function calculates the distance between two points.
float Distance(const float& x,const float& y)
{
	float result, mid; // Stores the the distance between x & y and mid stores the midpoint between the two points.
	result = sqrt((x*x)+(y*y)); // Calculates the square root of the sum of x-squared & y-squared.
	// Pre-processor: Checks to see that result is greater than or equal to 0(zero).
	// Post-processor: If true it returns an error, else the program executes as follows.
	assert(result >= 0);
	// Calculates the midpoint of x and y.
	mid = (x + y)/2;
	// Pre-processor: Checks to see if midpoint is greater than or equal to 0(zero).
	// Post-processor: If true it returns an error, else the program executes as follows.
	assert(mid >= 0);

	// Displays the distance between the two points.
	cout << "The distance between " << x << " and " << y << " is " << (result) << ".\n";
	cout << "The midpoint of " << x << " and " << y << " is " << (mid) << ".\n";
}

int main()
{
	Point p1(3,4);
	Distance(p1.get_x(),p1.get_y());
	return 0;
}
