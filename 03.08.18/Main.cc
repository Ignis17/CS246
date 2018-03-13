// This program modifies the previous Point.h and utilizes the Inheritance
//(access specifiers).
// Name: Joel Turbi
// Course: CS246
// Assignment: 2A & 2B
// Due: 03-13-18
#include "Point.h"


// This function assigns and displays values for both X and Y.
void First()
{
	Point p1(5,4); // x=5,y=4.
	Point p2; // x=0, y=0.

	// Display values from object.
	cout << p1.GetX() << " " << p1.GetY() << "\n";
	cout << p2.GetX() << " " << p2.GetY() << "\n";
}
// This function illustrates what happens when a private access specifier
// is accessed by a protected access specifier.
void Second()
{
	Point p1(3,4);
	//p1.SetX(19); // Had to be commented out in order for third instance to work.
	cout << p1.GetX() << endl;

	/*What happens and why?
		- An error message is displayed, stating the following:
			void Point::SetX(double) ' is protected. This error was due to
			SetX() being defined as protected and not being accessable by
			Base function whose data is declared as private.*/
}
//
void Third()
{
	//Circle c1(4,6.02,1.03);
	Circle c1;
	// Modified cordinates for Cirle Class
	c1.SetValues(2,2);
	/* What happens?
		- An error message is displayed, stating that:
			protected members from base class is declared as protected and it is
			protected within this context c1.SetX(2); Therefore cordinate values
			cannot be set. */
	cout << "Radius: " << c1.GetRadius();
	cout << " X: " << c1.GetX() << " Y: " << c1.GetY() << endl;




	/*What happens?
		- An error message is displayed, stating the following:
		 	Point class is not an accessible base of Circle. Both getters for
			X and Y values are not accessible.  */
}
int main()
{
	//First(); // Commented because it is no longer needed for Point.h
					  // illustrations.
	//Second(); // Commented since it was only used for demonstration
						 // purposes.
	Third(); //Commented since it was only used for demonstration
						 // purposes
	return 0;
}
