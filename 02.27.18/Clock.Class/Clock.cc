// This program simulates a clock and displays the current time.
// Name: Joel Turbi
// Course: CS246
// Assignment: Clock class
// Due: 03-01-18
#include "Clock.h"
#include <iostream>
#include <ctime> // Needed for current time.
using namespace std;

void Display()
{
  // current date/time based on current system.
  time_t now = time(0);
  tm *ltm = localtime(&now);

  Clock c; // Clock object.
  // Assigns current hour and minute respectively.
  c.SetHour(ltm->tm_hour); // Sets the current hour value.
	c.SetMinutes(ltm->tm_min); // Sets the current minute value.

 // Displays Current time.
  cout << "   The current time is: \n\n";
  cout << "\t*********\n\t* ";
  cout << c.ToString() << " *\n\t*********\n";
}


int main()
{
  Display(); // Function call.
  return 0;
}
