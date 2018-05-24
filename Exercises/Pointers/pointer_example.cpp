#include <iostream>

int main()
{
  int i=50,j=25;
  int *p1,*p2;
  p1=&i;
  p2=&j;
  *p1=*p2+4;

  std::cout << *p1 << " " << *p2 << std::endl;
  return 0;
}
