// This program simulates a clock and displays the current time.
// Name: Joel Turbi
// Course: CS246
// Assignment: Clock class
// Due: 03-01-18
#ifndef CLOCK_H
#define CLOCK_H
#define NDEBUG
#include <sstream>
#include <iomanip>
#include <cassert>

class Clock
{
private:
  int hour;
  int minutes;
public:
  Clock():hour(0),minutes(0){} // Default constructor.
  void SetHour(int value) // Hour setter function.
  {
    if(value >= 0 && value <= 23)
    {
      // Pre-processor: Checks for value validation.
      // Post-processor: If true it performs the following assignment, else it returns an error.
      assert(value >= 0 && value <= 23);
      hour = value;
    }
  }
  void SetMinutes(int value) // Minutes setter function.
  {
    if(value >= 0 && value <= 59)
    {
      // Pre-processor: Checks for value validation.
      // Post-processor: If true it performs the following assignment, else it returns an error.
      assert(value >= 0 && value <= 59);
      minutes = value;
    }
  }
  int GetHour() const
  {
    return hour;
  }
  int GetMinutes() const
  {
    return minutes;
  }
  std::string ToString() const
  {
    std::stringstream out;
    out << std::setfill('0');
    out << std::setw(2) << GetHour() << ":";
    out << std::setw(2) << GetMinutes();

    return out.str();
  }
};
#endif
