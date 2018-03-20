#include <iostream>
#include <cstdlib>
#include "bag.h"
#include "bag.cc"

using namespace std;

int main(int argc, char *argv[])
{
  Bag b;
  bag_type value;
  int limit=0;

  cout << "First Bag" << endl;
  do {
     value=rand()%9 +1;
     if(limit++ > 25) break;
  } while(b.insert(value));
  cout << b.size()<< " elements in the bag" << endl;
  cout << b.howmany(4) << " fours " << endl;
  b.remove(4);
  cout << b.size()<< " elements in the bag" << endl;
  cout << b.howmany(4) << " fours " << endl;

  cout << endl << "Second Bag " << endl;
  Bag x=b;   // second bag a copy of first
  cout << x.size() << " elements in bag" << endl;
  x.clear();   // clear the bag
  cout << x.size() << " elements in bag" << endl;
  for(value=0; value < 4 ; value++) x.insert(4);
  cout << x.size() << " elements in bag" << endl;
  cout << x.howmany(4) << " fours " << endl;

  Bag y;
  y= x + x;
  cout << endl << "Third Bag  " << endl;
  cout << y.size() << " elements in bag" << endl;
  cout << y.howmany(4) << " fours " << endl;

  Bag z;
  z= x + b;
  cout << endl << "Fourth Bag  " << endl;
  cout << z.size() << " elements in bag" << endl;
  cout << z.howmany(4) << " fours " << endl;
  return 0;
}
