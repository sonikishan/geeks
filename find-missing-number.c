#include<stdio.h>
 
/* getMissingNo takes array and size of array as arguments*/
int getMissingNo (int a[], int n)
{
    int i, total;
    total  = (n+1)*(n+2)/2;   
    for ( i = 0; i< n; i++)
       total -= a[i];
    return total;
}
 
/*program to test above function */
int main()
{
    // int a[] = {1,2,4,5,6};
    int a[10],n,i;
    printf("How many numbers: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
    	scanf("%d", &a[i]);
    }
    int miss = getMissingNo(a,n);
    printf("Missing number is: %d \n", miss);
    getchar();
    return 0;
}