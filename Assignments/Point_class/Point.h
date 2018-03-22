// This program calculates the distance between two points as well as
// its midpoint.
// Name: Joel Turbi
// Course: CS246
// Assignment: 2A & 2B
// Due: 03-01-18
#ifndef POINT_H
#define POINT_H

class Point
{
public:
  // Default if no values provided.
  Point(double init_x = 0, double init_y = 0)
  {
    x = init_x;
    y = init_y;
	}
  // Shift a point by dx and dy values
  void shift(double dx, double dy)
  {
    x = x + dx;
    y = y + dy;
	}
  // Return the value of x
  double get_x() const{return x;}
  // Return the value of y
  double get_y() const{return y;}
private:
  double x;
  double y;
};
#endif
