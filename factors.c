#include <stdio.h>
int main()
{
  int n,i,arr[100],j=0;
  printf("Enter a positive integer: ");
  scanf("%d",&n);
  printf("Factors of %d are: ", n);
  for(i=1;i<=n;++i)
  {
      if(n%i==0)
         printf("%d",i);
  }
  return 0;
}

// #include<stdio.h>

// int main()
// {
//   int n,i,j=0,arr = [],k;
//   scanf("%d",&n);
//   for(i=1;i<=n;++i)
//   {
//       if(n%i==0)
//         arr[j] = i;
//         j++;
//   }
//   int sz = sizeof(arr)/sizeof(arr[0]);
//   for(k=0;k < sz; k++) {
//     printf("%d", arr[k]);
//   }
//     return 0;
// }
