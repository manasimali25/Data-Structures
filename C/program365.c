#include<stdio.h>

# pragma pack(1)

struct node
{
  int data;
  struct node *next;

};

typedef struct node NODE;            // NODE is nickname of struct node
typedef struct node * PNODE;         // PNODE is nickname of struct node *

int Count(PNODE first)
{
  int iCount = 0;


  // ITERATION
  while(first != NULL)
  {
    iCount++;
    first = first -> next;       
   
  }
  return iCount;

}


int main()
{
  PNODE head = NULL;    

  NODE obj1;    // obj1 is 1st mulga
  NODE obj2;    // obj2 is 2nd mulga
  NODE obj3;

  int iRet = 0;

  head = &obj1;       // 100      // obj1 is phila mulga 

  obj1.data = 11;
  obj1.next = &obj2;

  obj2.data = 21;
  obj2.next = &obj3;

  obj3.data = 51;
  obj3.next = NULL;

  // Calling
  iRet = Count(head);          // Count(100);      // Count(&obj1);
  printf("Number of nodes are: %d\n",iRet);

  return 0;
}