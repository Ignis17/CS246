#include "Clock.h"
#include <iostream>
#include <ctime>
using namespace std;

void Display()
{
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
