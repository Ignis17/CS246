#include <cstdlib> // Provides NULL
#include <iostream>
#include <cassert>
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
    swapped = false; // reset before each scan 12 42 13 16

    for (value_type i = 1; i < SIZE; i++) // start at 1 and compare with previous
    {
        if (a[i-1] > a[i])  // move bigger values along, use "<" for descending
        {
          int temp;
          temp = a[i];
          a[i] = a[i-1];
          a[i-1] = temp;
          swapped = true;
        }
      }
    }while(swapped);
  }

void List::FillArray(value_type arr[], size_type SIZE)
{
  for (value_type i=0;i < SIZE;i++)
  {
    //  Pre-condition: Chescks that SIZE is equal to assigned value.
    //  Post-condition: If condition is true, it will execute the following
    // statements. Otherwise it will display error message.
    assert(i < SIZE);
    bool check; //  bool variable to check or number is already used
    int n; // variable to store the number
    do
    {
      n = rand()%100 + 1;
      //check or number is already used:
      check = true;
      for (value_type j = 0; j < i; j++)
      {
        if (n == arr[j]) // if number is already used
        {
          check=false; // set check to false
          break; // no need to check the other elements of arr[]
        }
      }
    }while(!check); // loop until new, unique number is found
    arr[i] = n; // store the generated number in the array
  }
}
