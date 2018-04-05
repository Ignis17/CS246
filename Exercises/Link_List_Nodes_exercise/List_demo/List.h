// This programs provides a demonstration of Link list utilizing nodes. It first
// generates 12 random numbers between 1 and 100, sorts them and finally inserts
// it into the list.
// Author: Joel Turbi
// Course: CS246
// Assignment: Node Class / List Class
// Created: 03/29/2018

#ifndef LIST_H
#define LIST_H

#include <cstdlib> // Provides NULL
#include <iostream>
#include <cassert> // Provides assert

typedef int value_type;
typedef size_t size_type;
const size_type SIZE = 12; // Global const variable.

using namespace std;

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
  List()
  {
    head = NULL;
    curr = NULL;
    temp = NULL;
  }
  void AddNode(value_type addData)
  {
    nodePtr n = new node;
    n->next = NULL;
    n->data = addData;

    if(head != NULL)
    {
      curr = head;
      while(curr->next != NULL)
      {
        curr = curr->next;
      }
      curr->next = n;
    }
    else
    {
      head = n;
    }
  }
  void DeleteNode(value_type delData)
  {
    nodePtr delPtr = NULL;
    temp = head;
    curr = head;

    while(curr != NULL && curr->data != delData)
    {
      temp = curr;
      curr = curr->next;
    }
    if(curr == NULL)
    {
      cout << delData << " was not in the list.\n";
      delete delPtr;
    }
    else
    {
      delPtr = curr;
      curr = curr->next;
      temp->next = curr;
      delete delPtr;
      cout << "The value " << delData <<  " was deleted.\n";
    }
  }

  void Sort(value_type *arr)
  {
    value_type *a = arr;

    for(int i = 0; i < SIZE; i++)
    {
      for(int j=0; j < (SIZE-i-1);j++)
      {
        if(*(a+j) > *(a+(j+1)))
        {
          int temp = *(a+j);
          *(a+j) = *(a+(j+1));
          *(a+(j+1)) = temp;
        }
      }
    }
  }

  void PrintList()
  {
    curr = head;
    while(curr != NULL)
    {
      cout << curr->data << endl;
      curr = curr->next;
    }
  }
  // void Sort(value_type *a)
  // {
  //   for(int *first = a, *swapped = a, *last = a + SIZE; !(last - first < 2 ); first = a, last = swapped)
  //   {
  //     swapped = a;
  //     while ( ++first != last)
  //     {
  //       if (*(first - 1) > *first)
  //       {
  //         swapped = first;
  //         int tmp = *first;
  //         *first = *(first - 1);
  //         *(first - 1) = tmp;
  //       }
  //     }
  //   }
  // }
  void NumberGenerator(value_type *&a)
  {
    delete [] a;
    a = new value_type[SIZE];

    for (value_type i=0;i < SIZE;i++)
    {
      assert(i < SIZE); // Checks that i does not exceed the value of SIZE.

      bool check; //  bool variable to check or number is already used
      int n; // variable to store the number

      do
      {
        // Generates random number between 1 and 100 and stores it in local
        // variable.
        n = rand()% 100 + 1;
        // check or number is already used:
        check = true;

        for (value_type j = 0; j < i; j++)
        {
          if (n == a[i]) // if number is already used.
          {
            check=false; // Set check to false.
            break; // no need to check the other elements of arr[].
          }
        }
      }while(!check); // loop until new, unique number is found.
      a[i] = n; // store the generated number in the array.
    }
  }
};
#endif
