// Author: Joel Turbi
// Created: 03/28/2018
// File: List.h

#ifndef LIST_H
#define LIST_H

typedef int value_type;
typedef size_t size_type;

const size_type SIZE = 12; // Global const variable  named SIZE.

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
  void Sort(value_type a[], size_type SIZE);
  void FillArray(value_type arr[], size_type SIZE);
};
#endif
