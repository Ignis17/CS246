#ifndef THINKING_CAP
#define THINKING_CAP

#include <iostream>
#include <cassert>
#include <string>
#include <cstdlib>
class ThinkingCap
{
private:
  char green[50];
  char red[50];
public:
  void slots(char newGreen[],char newRed[]);
  void pushGreen() const;
  void pushRed() const;
};
#endif

void ThinkingCap::slots(char newGreen[],char newRed[])
{
  assert(strlen(newGreen) < 50);
  assert(strlen(newRed) < 50);
  strcpy(green,newGreen);
  strcpy(red,newRed);
}
void ThinkingCap::pushGreen() const
{
  std::cout << green;
}
void ThinkingCap::pushRed() const
{
  std::cout << red;
}

int main()
{
  ThinkingCap h;
  h.slots("Hello","There");
  h.pushRed();
}
