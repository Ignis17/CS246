#ifndef CLOCK_H
#define CLOCK_H
#include <sstream>
#include <iomanip>

class Clock
{
private:
  int hour;
  int minutes;
public:
  Clock():hour(0),minutes(0){}
  void SetHour(int value)
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
