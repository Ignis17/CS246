#include <iostream>
using namespace std;


unsigned int Hash(const string &Key)
{
  unsigned int hash = 0;

  for(int j = 0;j != Key.size();j++)
  {
    hash += Key[j];
  }
  return hash;
}

int main()
{
  string str = "mississippi";

  std::cout << Hash(str) << " ";
  return 0;
}
