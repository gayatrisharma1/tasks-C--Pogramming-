#include <stdio.h>
#include <string.h>
 
int main()
{
  char a[1000], b[1000];
 
  printf("Enter the first name\n");
  gets(a);
 
  printf("Enter the last name\n");
  gets(b);
 
  strcat(a, b);
 
  printf("Full name : %s\n", a);
 
  return 0;
}