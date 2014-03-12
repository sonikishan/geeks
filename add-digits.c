#include <stdio.h>
 
int sumnumber(int n) {
   int remainder, sum = 0;
    while(n != 0)
   {
      remainder = n % 10;
      sum = sum + remainder;
      n = n / 10;
   }   
   if (sum >= 9)
   {
      sum = sumnumber(sum);
   }
   return sum;
}

int main()
{
   // int n, sum = 0, remainder;
   int i;
 
   printf("Enter an integer\n");
   scanf("%d",&i);
   printf("%d\n", sumnumber(i));
 
   // printf("Sum of digits of entered number = %d\n",sum);
 
   return 0;
}