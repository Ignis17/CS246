// This program
// Name: Joel Turbi
// Course: CS246
// Assignment:
// Due: 03-01-18
#ifndef POINT_H
#define POINT_H

class Point
{
public:
  //default if no values provided
  Point(double init_x=0, double init_y=0)
  {
    x = init_x;
    y = init_y;
	}
  //shift a point by dx and dy values
  void shift(double dx, double dy)
  {
    x = x + dx;
    y =y + dy;
	}
  //return the value of x
  double get_x() const{return x;}
  //return the value of y
  double get_y() const{return y;}
private:
  double x;
  double y;
};

#endif
