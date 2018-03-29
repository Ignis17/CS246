// Author: Joel Turbi
// Created: 03/28/2018
// File: List.h

#ifndef LIST_H
#define LIST_H
typedef double value_type;
class List
{
private:
  typedef struct node
  {
    value_type data;
    node* next;
  }* nodePtr;

  nodePtr head;
  nodePtr curr;
  nodePtr temp;

public:
  List();
  void AddNode(value_type addData);
  void DeleteNode(value_type delData);
  void PrintList();
};
#endif
