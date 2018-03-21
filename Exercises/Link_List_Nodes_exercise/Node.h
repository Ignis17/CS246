#ifndef NODE_H
#define NODE_H
#include <cstdlib>

class Node{
public:
  typedef double value_type;

  // CONSTRUCTOR
  Node(const value_type& data = value_type(), Node* link = NULL){}

  // Member function to set the data field
  void  Set_Data(const value_type& new_data){
    data_field = new_data;
  }
  // Member function to set  the link field
  void Set_Link(Node* new_link){
    link_field = new_link;
  }
  // Member function to retrieve the current data
  value_type Data() const
  {
    return data_field;
  }
  // Member fucntions to retrieve current link data
  const Node* Link() const
  {
    return link_field;
  }
  Node* Link(){
    return link_field;
  }
private:
  value_type data_field;
  Node* link_field;
};
#endif
