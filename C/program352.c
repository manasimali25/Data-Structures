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

  printf("%lu\n",sizeof(obj));      // 12 aala bcoz pointer chi size 8 ahe aani pragma pack ne extra 4 geli

  // i byte mdhe ghetli jail bcoz # pragma pack(1) kely
  // 4 int + 4 pointer



  return 0;
}