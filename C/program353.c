#include<stdio.h>

# pragma pack(1)

struct node
{
  int data;
  struct node *next;

};

int main()
{
  struct node obj;   // memory allocate jhali

  obj.data = 11;
  obj.next = NULL;

  printf("%d",obj.data);  

  return 0;
}