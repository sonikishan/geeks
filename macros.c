#include <stdio.h>
#define square(x) x*x
int main()
{
  int x,n;
  printf("Eneter value to square: ");
  scanf("%d",&x);
  n = square(x);
  printf("Squared number is: %d \n",n);
  
  getchar();
  return 0;
}