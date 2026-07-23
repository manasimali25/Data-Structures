#include<stdio.h>

struct node
{
  int data;
  struct node *next;

};

int main()
{
  struct node nobj;   // memory allocate jhali

  printf("%lu\n",sizeof(nobj));      // 16 aala bcoz pointer chi size 8 ahe aani padding mule extra 4 aali
  // 4 int + 4 padding + 4 pointer



  return 0;
}