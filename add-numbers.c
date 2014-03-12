#include <stdio.h>
 
int main()
{
   // int n=0, sum = 0, c, value, arr[10],sz;

   // while(getc() != EOF) {
   //    scanf("%d", &arr[n]);
   //    n++;
   // }

   // while(1) {
   //    scanf("%d", &arr[n]);
   //    n++;
   //    if(arr[n]==13) //I don't know what to write here in place of question marks
   //    break;      
   // }


   // sz = sizeof(arr)/sizeof(arr[0]);

   // for (int i = 0; i < sz-1; i++)
   // {
   //    printf("%d \n", arr[i]);
   // }

   char input[256];
   int i;

   for(i = 0; i < 256; i++ ) {
    scanf('%s', &input[i]);  
    if (input[i] == '\n' )
    {
        input[i] = '\0';
        break;
    }
   }

   // for (int i = 0; i < 4; i++) {
   //    scanf("%d", &arr[i]);   /* code */
   //    if (arr[i] == '\n')
   //    {
   //       printf("%d\n", arr[i]);
   //       break;
   //    }
   //    if (arr[i] == -1)
   //    {
   //       break;
   //    }
   //    sum = sum + arr[i];
   // }   
   // printf("%d\n", sum);
   // while (scanf("%d", &arr[n])) {
   //    if (arr[n] > 0) {
   //      n++;
   //    }
   // }
   // sz = sizeof(arr)/sizeof(arr[0]);
   // for (int i = 0; i < sz-1; i++)
   // {
   //    if (arr[i] == -1)
   //    {
   //       break;
   //    }
   //    sum = sum + arr[i];
   // }
 
   // printf("Enter the number of integers you want to add\n");
   // scanf("%d", &n);
 
   // printf("Enter %d integers\n",n);
 
   // for (c = 1; c <= n; c++)
   // {
   //    scanf("%d",&value);
   //    if (value == -1)
   //    {
   //       break;
   //    }
   //    sum = sum + value;
   // }
 
   // printf("Sum of entered integers = %d\n",sum);
 
}