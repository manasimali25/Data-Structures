// Template

#include <stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node *next;

};

typedef struct node NODE;
typedef struct node * PNODE;       // * node = PNODE
typedef struct node ** PPNODE;     // ** node = PPNODE

// Traversal - 1st function
void Display(PNODE first)
{

}


// Traversal - 2nd function
int Count(PNODE first)
{
  return 0;
}


// Insertion - Insert at first position
void InsertFirst(PPNODE first, int iNo)
{

}


// Insertion - Insert at last position
void InsertLast(PPNODE first, int iNo)
{
  
}


// Insertion - Insert at given position
void InsertAtPos(PPNODE first, int iNo, int iPos)
{
  
}


// Deletion - Delete at first position
void DeleteFirst(PPNODE first)
{

}


// Deletion - Delete at last position
void DeleteLast(PPNODE first)
{
  
}


// Deletion - Delete at given position
void DeleteAtPos(PPNODE first, int iPos)
{
  
}


int main()
{
  PNODE head = NULL;

  return 0;
}
