#include <stdio.h>
#include <string.h>
 
int main()
{
   int n,i;
   // printf("\n Enter Number:");
   scanf("%d",&n);

   //Input the array elements
   int array[n];
   // printf("Enter values \n");

   for(i=0;i<n;i++)
      scanf("%d",&array[i]);
      // cin>>array[i];

   int max = array[0];
   int count = 1, maxcount = 1;

   for(i=1;i<n;i++) {
      if(array[i-1]==array[i]) {
         count++;
         if(maxcount<count) {
            max=array[i];
            maxcount=count;
         }
      }
      else{
         count = 1;
      }
   }
   printf("%d", max);
   // cout<<"Max value is  "<<max<<"and it occured for "<<maxcount<<"  times";
   return 0;

   // int number[100];
   // int c = 0,n,i, count[26] = {0};
 
   // printf("Enter a number \n");
   // scanf("%d", &n);



   // for (i = 0; i < n; i++)
   // {
   //    scanf("%d",&number[i]);
   //    count[number[i]] = count[number[i]]++;
   //    // count[number[i]] = i;
   // }

   // int max = count[0];
   // for (c = 1; c < 26; c++)
   // {
   //    if (count[c] > max)
   //    {
   //       max = count[c];
   //    }
   // }

   // printf("%d", max);
 
   // // while ( string[c] != '\0' )
   // // {
   // //    /* Considering characters from 'a' to 'z' only */
 
   // //    if ( string[c] >= 'a' && string[c] <= 'z' ) 
   // //       count[string[c]-'a']++;
 
   // //    c++;
   // // }
 
   // // for ( c = 0 ; c < 26 ; c++ )
   // // {
   // //    if( count[c] != 0 )
   // //       printf("%c occurs %d times in the entered string.\n",c+'a',count[c]);
   // // }
 
   // return 0;
}