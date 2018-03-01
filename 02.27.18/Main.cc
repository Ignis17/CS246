// This program 
// Name: Joel Turbi
// Course: CS246
// Assignment: 2A & 2B
// Due: 03-01-18
#include <iostream>
#include <cstdlib>
#include <cmath> // Needed for math library.
#include "Point.h"
using namespace std;

// This function calculates the distance between two points.
float Distance(const float& x,const float& y)
{
	float result; // Stores the the distance between x & y.
	result = sqrt((x*x)+(y*y)); // calculates the square root of the sum of x-squared & y-squared.
	// Displays the distance between the two points.
	cout << "The distance between " << x << " and " << y << " is " << (result) << ".\n";
}

int main()
{
	Point p1(3,4);
	Point p2(1,2);
	Distance(p1.get_x(),p1.get_y());
	return 0;
}
