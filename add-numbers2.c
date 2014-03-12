#include <stdio.h>
void main()
  {
      char a[10], c;
      int i = 0;
      while ((c = getchar()) != '\n')
      {
          scanf("%c", &a[i++]);
          c = getchar();
      }
      for (i = 0; i < 11; i++)
          printf("%c", a[i]);
   }