// This programs provides a demonstration of Link list utilizing nodes. It first
// generates 12 random numbers between 1 and 100, sorts them and finally inserts
// it into the list.
// Author: Joel Turbi
// Course: CS246
// Assignment: Node Class / List Class
// Created: 03/29/2018


#ifndef LIST_H
#define LIST_H

typedef int value_type;
typedef size_t size_type;

const size_type SIZE = 12; // Global const variable.

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
  void NumberGenerator(value_type arr[], size_type SIZE);
};
#endif
