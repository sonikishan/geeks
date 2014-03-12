// #include <stdio.h>
// int main()
// {
//   // int n = 687;
//   int n;
//   printf("Enter number to sum up: ");
//   scanf("%d", &n);
//   printf(" %d \n", getSum(n));
 
//   getchar();
//   return 0;
// }
 
// /* Function to get sum of digits */
// int getSum(int n)
// {
//     int sum;
//     /*Single line that calculates sum*/
//     for(sum=0; n > 0; sum+=n%10,n/=10);
//     return sum;
// }
#include <stdio.h>

int sumDigits(int no)
{
  return no == 0 ? 0 : no%10 + sumDigits(no/10) ;
}
 
int main(void)
{
  int n;
  printf("Enter number to sum up: ");
  scanf("%d", &n);
  printf("%d \n", sumDigits(n));
  getchar();
  return 0;
}