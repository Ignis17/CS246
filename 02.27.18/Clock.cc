#include "Clock.h"
#include <sstream>
#include <iomanip>


Clock()
{
  hour = 0;
  minute = 0;
}

Clock::void SetHour(int value)
{
  if(value>=0&&value<=23)
  {
    hour = value;
  }
}
void SetMinutes(int value)
{
  if(value>=0&&value<=59)
  {
    minute = value;
  }
}
Clock::int GetHour()
{
  return hour;
}
Clock:: int GetMinutes()
{
  return minutes;
}
std::string ToString() const
{
  std::stringstream out;
  out << std::setfill('0');
  out << std::setw(2) << hour << ":";
  out << std::setw(2) << minutes << ":";

  return out.str();
}
