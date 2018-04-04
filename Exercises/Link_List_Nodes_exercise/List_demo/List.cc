// This programs provides a demonstration of Link list utilizing nodes. It first
// generates 12 random numbers between 1 and 100, sorts them and finally inserts
// it into the list.
// Author: Joel Turbi
// Course: CS246
// Assignment: Node Class / List Class
// Created: 03/29/2018


#include <cstdlib> // Provides NULL
#include <iostream>
#include <cassert> // Provides assert
#include "List.h" // Uses List header file

using namespace std;

List::List()
{
  head = NULL;
  curr = NULL;
  temp = NULL;
}

void List::AddNode(value_type addData)
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
void List::DeleteNode(value_type delData)
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

void List::PrintList()
{
  curr = head;
  while(curr != NULL)
  {
      cout << curr->data << endl;
      curr = curr->next;
  }
}

void List::Sort(value_type a[], size_type SIZE)
{
  bool swapped = false;

  do
  {
    swapped = false; // reset before each scan

    for (value_type i = 1; i < SIZE; i++) // start at 1 and compare with previous
    {
      assert(i < SIZE); // Checks that i does not exceed the value of SIZE.

      if (a[i-1] > a[i])  // move bigger values along, use "<" for descending
      {
        int temp; // Temporary int variable to hold value of index.
        temp = a[i];
        a[i] = a[i-1];
        a[i-1] = temp;
        swapped = true; // swapped is assigned a true value.
      }
    }
  }while(swapped);
}

void List::NumberGenerator(value_type arr[], size_type SIZE)
{

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
        if (n == arr[j]) // if number is already used.
        {
          check=false; // Set check to false.
          break; // no need to check the other elements of arr[].
        }
      }
    }while(!check); // loop until new, unique number is found.
    arr[i] = n; // store the generated number in the array.
  }
};
