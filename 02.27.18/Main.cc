#include "Clock.h"
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
  time_t now = time(0);
  tm *ltm = localtime(&now);
	//Using an anonymous object to display
	//the time at midnight
	Clock c;

  c.SetHour(ltm->tm_hour);
	c.SetMinutes(ltm->tm_min);
	cout << "Hour: " << c.GetHour() << "\n" << "Minute: " << c.GetMinutes() << "\n";
  cout << c.ToString() << "\n";
  return 0;
}
