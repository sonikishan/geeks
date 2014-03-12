// #include <stdio.h>
 
// /* Iterative function to reverse digits of num*/
// int reversDigits(int num)
// {
//     int rev_num = 0;
//     while(num > 0)
//     {
//         rev_num = rev_num*10 + num%10;
//         num = num/10;
//     }
//     return rev_num;
// }
 
// /*Driver program to test reversDigits*/
// int main()
// {
//     int num = 4562;
//     printf("Reverse of no. is %d", reversDigits(num));
 
//     getchar();
//     return 0;
// }
// Time Complexity: O(Log(n)) where n is the input number.


// RECURSIVE WAY
// Thanks to Raj for adding this to the original post.

#include <stdio.h>
 
/* Recursive function to reverse digits of num*/
int reversDigits(int num)
{
  static int rev_num = 0;
  static int base_pos = 1;
  if(num > 0)
  {
    reversDigits(num/10);
    rev_num  += (num%10)*base_pos;
    base_pos *= 10;
  }
  return rev_num;
}
 
/*Driver program to test reversDigits*/
int main()
{
    int num = 4562;
    printf("Reverse of no. is %d", reversDigits(num));
 
    getchar();
    return 0;
}