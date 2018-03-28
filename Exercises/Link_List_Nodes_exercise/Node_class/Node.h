#ifndef NODE_H
#define NODE_H
#include <cstdlib>

class Node{
public:
  // TYPEDEF
  typedef double value_type;
  // CONSTRUCTOR
  Node(const value_type& init_data = value_type(),Node* init_link = NULL)
  {
    data_field = init_data;
    link_field = init_link;
  }
  // Member function to set the data and link fields:
  void Set_Data(const value_type& new_data){data_field = new_data;}
  void Set_Link(Node* new_link){link_field = new_link;}
  // Constant member function to retrieve the current data
  value_type Data()const{return data_field;}
  // Two slightly different functions to retrieve current link:
  const Node* Link() const{return link_field;}
  Node *Link(){return link_field;}
  size_t listLength(const Node* head_ptr)
  // Precondition: head_ptr is the head pointer of a linked list.
  // Postcondition: The value returned is the number of nodes in the linked list.
  {}
private:
  value_type data_field;
  Node* link_field;
};
#endif
