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
protected:
  // Sets value for x.
  void SetX(double x){this->x = x;}
  // Sets value for y.
  void SetY(double y){this->y = y;}
private:
  double x,y; // Compact declaration
};

class Circle: protected Point
{
public:
  // Just set the radius for now.
  Circle(double radius = 1){this->radius =  radius;}
  // Gets the radius
  double GetRadius() const {return radius;}
private:
  double radius;
};
#endif
