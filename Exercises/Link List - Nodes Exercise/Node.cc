#include <iostream>
#include "Node.h"
using namespace std;

int main(){
  Node *p, *q, *r;
  p = new Node;
  q = new Node(4.9);
  r = new Node(1.6,p);

  cout << (*q).Data() << endl;
  p=q;
  return 0;
}
