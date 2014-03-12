#include <stdio.h>
int main()
{
 char *ptr = "geeksforgeeks";
 printf("%c \n", *&*&*ptr);
 printf("%s \n", *&*&ptr);
  
 getchar();
 return 0;
}