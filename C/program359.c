#include<stdio.h>

# pragma pack(1)

struct node
{
  int data;
  struct node *next;

};

typedef struct node NODE;            // NODE is nickname of struct node
typedef struct node * PNODE;         // PNODE is nickname of struct node *

int main()
{
  PNODE head = NULL;     // starting wla hath jo null ahe (address 60 - 68)    // Sir ahet jyala ajun pahilya mula ch naav mhit nhiye     // 8 byte

  NODE obj1;    // obj1 is 1st mulga
  NODE obj2;    // obj2 is 2nd mulga
  NODE obj3;
  
  head = &obj1;       // obj1 is phila mulga 

  obj1.data = 11;
  obj1.next = &obj2;

  obj2.data = 21;
  obj2.next = &obj3;

  obj3.data = 51;
  obj3.next = NULL;

  printf("%d\n",head -> data);                   // 11
  printf("%d\n",head -> next -> data);           // 21
  printf("%d\n",head -> next -> next -> data);   // 51

  return 0;
}