#include<stdio.h>
#include<stdlib.h>

# pragma pack(1)

struct node
{
  int data;
  struct node *next;

};

// typedef struct node NODE;            // NODE is nickname of struct node
// typedef struct node * PNODE;         // PNODE is nickname of struct node *

int main()
{
  struct node * newn = NULL;      // newn = new node

  newn = (struct node *)malloc(sizeof(struct node));

  newn -> data = 11;
  newn -> next = NULL;

  printf("%d\n",newn -> data);

  return 0;
}
