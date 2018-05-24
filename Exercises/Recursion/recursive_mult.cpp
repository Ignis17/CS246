#include <iostream>

int mult(int a, int b)
{
  if(b==1)
    return a;
  else if(a == 0 || b == 0)
    return 0;
  else
    return a+mult(a,b-1);
}

int main()
{
  std::cout << mult(2,3);
  return 0;
}
