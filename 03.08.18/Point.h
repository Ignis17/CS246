// This program modifies the previous Point.h and utilizes the Inheritance
// (access specifiers).
// Name: Joel Turbi
// Course: CS246
// Assignment: 2A & 2B
// Due: 03-13-18

#ifndef POINT_H
#define POINT_H
#include <iostream>
#include <cstdlib>
using namespace std;

class Point
{
public:
  // Default if no values provided.
  Point(double x = 0, double y = 0){this->x = x; this-> y = y;}
  // Return the value of x
  double GetX() const {return x;}
  // Return the value of y
  double GetY() const {return y;}
//protected: // In order to permit main program to use SetX() and SetY() functions
           // the protected specifier for setter functions can be commented out.
           // making it public instead. 
  // Sets value for x.
  void SetX(double x){this->x = x;}
  // Sets value for y.
  void SetY(double y){this->y = y;}
private:
  double x,y; // Compact declaration
};

// The difference in access:
// Class Circle: public Point - When using the access specifier as public base
//                              class gives access to its public member functions,
//                              as well as the ones declared as protected(setters).
//
//                            - Public and protected members of base class will
//                              be accessible in devired class as public and
//                              protected respectively. In protected mode, the
//                              public and protected members of base class
//                              becomes protected members of derived class.
//
//                           - In this example having a public access specifier
//                             would be more suited.
//
// Class Circle: private Point - In private mode the public and protected
//                               members of base class become private members
//                               of derived class.
//
// Class Circle: protected Point - Neither Point base class or its public member
//                                 functions are accessible to Circle (child class).


class Circle: public Point
{
public:
  Circle(double radius, double x, double y):Point(x,y){this->radius = radius;}
  // Just set the radius for now.
  Circle(double radius = 1){this->radius =  radius;}
  // Gets the radius
  double GetRadius() const {return radius;}

private:
  double radius;
};
#endif
