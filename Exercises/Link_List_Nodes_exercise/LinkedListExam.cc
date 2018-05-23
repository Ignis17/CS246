#ifndef LINKEDLIST
#define LINKEDLIST

#include <iostream>
#include <cstdlib>

struct node
{
  int data;
  node *next;
};

class linked_list
{
private:
  node *head,*tail;
public:
  linked_list()
  {
    head = NULL;
    tail = NULL;
  }
  void insert(int value)
  {
    node *temp = new node;
    temp->data = value;
    temp->next = NULL;

    if(head == NULL)
    {
      head = temp;
      tail =temp;
      temp = NULL;
    }
    else
    {
        tail->next = temp;
        tail=temp;
      }
  }
  node* print_reverse()
  {
    node *prev  = NULL;
    node *current = head;
    node *next;
    while(current != NULL)
    {
      next = current -> next;
      current -> next = prev;
      prev = current;
      current = next;
    }
    head = prev;
    return head;
  }

  void print()
  {
    node *temp = new node;
    temp = head;
    while(temp != NULL)
    {
      std::cout << temp->data << " ";
      temp = temp->next;
    }
  }
};
#endif

int main()
{
  linked_list link;

  link.insert(2);
  link.insert(3);
  link.insert(4);
  link.insert(9);
  link.print();
  link.print_reverse();
  std::cout << std::endl;
  link.print();
  return 0;
}
