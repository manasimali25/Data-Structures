#include<stdio.h>

# pragma pack(1)

struct node
{
  int data;
  struct node *next;


};

int main()
{
  struct node obj1;    // obj1 is 1st mulga
  struct node obj2;    // obj2 is 2nd mulga
  
  obj1.data = 11;
  obj1.next = &obj2;

  obj2.data = 21;
  obj2.next = NULL;

  printf("%u\n",&obj1);     // 100
  printf("%u\n",&obj2);     // 200

  printf("%u\n",obj1.next);    // 200
  printf("%u\n",obj2.next);    // 0 bcoz null ahe

  printf("%u\n",obj1.next -> data);    // 21

  return 0;
}