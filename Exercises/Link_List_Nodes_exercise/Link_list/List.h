// This program
// Author: Joel Turbi
// Created: 03/22/2018
#include "Node.h"
#include <cassert> // Provides assert function
#include <cstdlib> // Provides NULL & size_t
using namespace std;

namespace list
{
  size_t List_Length(const Node* head_ptr)
  // Library facilities used; cstdlib
  {
    const Node *cursor;
    size_t answer;

    answer = 0;
    for(cursor = head_ptr; cursor != NULL; cursor = cursor->Link())
        ++answer;
    return answer;
  }

  void List_Head_Insert(Node*& head_ptr, const Node::value_type& entry)
  {
    head_ptr = new Node(entry, head_ptr);
  }

  void List_Insert(Node* previous_ptr, const Node::value_type& entry)
  {
    Node *insert_ptr;
    insert_ptr = new Node(entry, previous_ptr->Link());
    previous_ptr->SetLink(insert_ptr);
  }

  Node* List_Search(Node* head_ptr, const Node::value_type& target)
  // Library facilities used: cstdlib
  {
    Node *cursor;

    for(cursor = head_ptr; cursor != NULL;cursor = cursor->Link())
        if(target == cursor->Data())
            return cursor;
    return NULL;
  }

  const Node* List_Search(const Node* head_ptr, const Node::value_type& target)
  {
    const Node *cursor;

    for(cursor = head_ptr; cursor != NULL;cursor = cursor->Link())
        if(target == cursor->Data())
            return cursor;
    return NULL;

  }

  Node* List_Locate(Node* head_ptr, std::size_t position)
  // Library facilities used: cassert, cstdlib
  {
    Node *cursor;
    size_t i;

    assert(0 < position);
    cursor = head_ptr;
    for(i = 1; (i < position) && (cursor != NULL); i++)
        cursor = cursor->Link();
    return cursor;
  }

  const Node* List_Locate(const Node* head_ptr, std::size_t position)
  {
    const Node *cursor;
    size_t i;

    assert(0 < position);
    cursor = head_ptr;
    for(i = 1; (i < position) && (cursor != NULL); i++)
        cursor = cursor->Link();
    return cursor;
  }

  void List_Head_Remove(Node*& head_ptr)
  {
    Node *remove_ptr;

    remove_ptr = head_ptr;
    head_ptr = head_ptr->Link();
    delete remove_ptr;
  }

  void List_Remove(Node* previous_ptr)
  {
    Node *remove_ptr;

    remove_ptr = previous_ptr->Link();
    previous_ptr->SetLink(remove_ptr->Link());
    delete remove_ptr;
  }

  void List_Clear(Node*& head_ptr)
  // Library facilities used: cstdlib
  {
    while(head_ptr != NULL)
        List_Head_Remove(head_ptr);
  }

  void List_Copy(const Node* source_ptr, Node*& head_ptr, Node*& tail_ptr)
  // Library facilities used:cstdlib
  {
    head_ptr = NULL;
    tail_ptr = NULL;

    // Handle the case of the empty list.
    if(source_ptr == NULL)
        return;

    // Make the head node for the newly created list, and put data in it.
    List_Head_Insert(head_ptr,source_ptr->Data());
    tail_ptr = head_ptr;

    // Copy the rest of the nodes one at a time, adding at the tail of a new list.
    source_ptr = source_ptr->Link();
    while(source_ptr != NULL)
    {
      List_Insert(tail_ptr, source_ptr->Data());
      tail_ptr = tail_ptr->Link();
      source_ptr = source_ptr->Link();
    }
  }
  void List_Piece(Node* start_ptr, Node* end_ptr, Node*& head_ptr, Node*& tail_ptr)
  // Library facilities used: stdlib.h
  {
    head_ptr = NULL;
    tail_ptr = NULL;

    // Handle the case of the empty list
    if (start_ptr == NULL)
        return;

    // Make the head node for the newly created list, and put data in it
    List_Head_Insert(head_ptr, start_ptr->Data());
    tail_ptr = head_ptr;
    if (start_ptr == end_ptr)
        return;

    // Copy the rest of the nodes one at a time, adding at the tail of new list
    for (start_ptr = start_ptr->Link(); start_ptr != NULL; start_ptr = start_ptr->Link())
    {
        List_Insert(tail_ptr, start_ptr->Data());
        tail_ptr = tail_ptr->Link();
        if (start_ptr == end_ptr)
            return;
    }
  }

  size_t List_Occurrences(Node* head_ptr, const Node::value_type& target)
  {
    size_t answer = 0;

    for (head_ptr = List_Search(head_ptr, target);
        head_ptr != NULL;
        head_ptr = List_Search(head_ptr->Link(), target))
        answer++;

    return answer;
  }

  void List_Insert_At(Node*& head_ptr, const Node::value_type& entry, size_t position)
  {
    assert(position > 0);
    Node *precursor;

    if (position == 1)
	     List_Head_Insert(head_ptr, entry);
    else
    {
	     precursor = List_Locate(head_ptr, position-1);
	     assert(precursor != NULL);
	     List_Insert(precursor, entry);
    }
  }
  Node::value_type List_Remove_At(Node*& head_ptr, size_t position)
  {
    assert(position > 0);
    Node *precursor;
    Node::value_type answer;

    if (position == 1)
    {
	     assert(head_ptr != NULL);
	     answer = head_ptr->Data();
	     List_Head_Remove(head_ptr);
    }
    else
    {
	     precursor = List_Locate(head_ptr, position-1);
	     assert(precursor != NULL);
	     assert(precursor->Link() != NULL);
	     answer = precursor->Link()->Data();
	     List_Remove(precursor);
    }
    return answer;
  }

  Node* List_Copy_Segment(Node* head_ptr, size_t start, size_t finish)
  {
    Node *start_ptr;
    Node *finish_ptr;
    Node *new_head;
    Node *new_tail;

    assert(start <= finish);
    start_ptr = List_Locate(head_ptr, start);
    assert(start_ptr != NULL);
    finish_ptr = List_Locate(start_ptr, finish-start+1);
    assert(finish_ptr != NULL);
    List_Piece(start_ptr, finish_ptr, new_head, new_tail);
    return new_head;
  }
}
