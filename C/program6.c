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
  struct node obj3;
  
  obj1.data = 11;
  obj1.next = &obj2;

  obj2.data = 21;
  obj2.next = &obj3;

  obj3.data = 51;
  obj3.next = NULL;

  printf("%u\n",&obj1);     // 100
  printf("%u\n",&obj2);     // 200
  printf("%u\n",&obj3);     // 300 

  printf("%u\n",obj1.next);    // 200
  printf("%u\n",obj2.next);     // 300
  printf("%u\n",obj3.next);     // 0 bcoz null ahe

  printf("%u\n",obj1.data);    // 11
  printf("%u\n",obj1.next -> data);    // 21
  printf("%u\n",obj1.next -> next -> data);    // 51  
  

  return 0;
}
