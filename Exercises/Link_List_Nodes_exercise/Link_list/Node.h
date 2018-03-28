// This program
// Author: Joel Turbi
// Created: 03/22/2018

#ifndef NODE_H
#define NODE_H
#include <cstdlib> // Provides size_t & NULL

namespace list
{
  class Node
  {
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
    void SetData(const value_type& new_data)
    // Postcondition: The node now contains a specified new data.
    {data_field = new_data;}
    void SetLink(Node* new_link)
    // Postcondition: The node now constains a specified new link.
    {link_field = new_link;}
    // Constant member function to retrieve the current data
    value_type Data()const
    // Postcondition: The return value is the data from this node.
    {return data_field;}
    // Two slightly different functions to retrieve current link:
    const Node* Link() const{return link_field;} // Const version
    Node *Link(){return link_field;} // non-const version
    // Postcondition: The return value is the link from this node.
  private:
    value_type data_field;
    Node* link_field;
  };
  // Functions for the linked list toolkit
  std::size_t List_Length(const Node* head_ptr);
  void List_Head_Insert(Node*& head_ptr, const Node::value_type& entry);
  void List_Insert(Node* previous_ptr, const Node::value_type& entry);
  Node* List_Search(Node* head_ptr, const Node::value_type& target);
  const Node* List_Search(const Node* head_ptr, const Node::value_type& target);
  Node* List_Locate(Node* head_ptr, std::size_t position);
  const Node* List_Locate(const Node* head_ptr, std::size_t position);
  void List_Head_Remove(Node*& head_ptr);
  void List_Remove(Node* previous_ptr);
  void List_Clear(Node*& head_ptr);
  void List_Copy(const Node* source_ptr, Node*& head_ptr, Node*& tail_ptr);
 void List_Piece(Node* start_ptr, Node* end_ptr, Node*& head_ptr, Node*& tail_ptr);
  std::size_t List_Occurrences(const Node* head_ptr, const Node::value_type& target);
  void List_Insert_At(Node*& head_ptr, const Node::value_type& entry, size_t position);
  Node::value_type List_Remove_At(Node*& head_ptr, size_t position);
  Node* List_Copy_Segment(Node* head_ptr, size_t start, size_t finish);

}

#endif
