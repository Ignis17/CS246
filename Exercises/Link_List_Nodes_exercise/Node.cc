#include <iostream>
#include "Node.h"
using namespace std;

int main(){
  //
  Node *p, *q, *r;

  // With no arguments, we will use both default values, so p's data will be
  // set to zero and p's link will be set to NULL:
  p = new Node;
  // We can explicitly set the data part of q's node to 4.9, and use the
  // default argument of NULL for q's link_field, like this:
  q = new Node(4.9);
  // We can create a new node for r to point to with data of 1.6 and a link
  // field that points to the same node as p:
  r = new Node(1.6,p);

  //
  cout << q->Data() << " " << q->Link() << endl;
  // 
  p = q;
  return 0;
}
