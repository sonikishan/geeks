#include <stdio.h>
#define MAX 100000
 
void printPairs(int arr[], int arr_size, int sum)
{
  int i, temp;
  int binMap[MAX] = {0}; /*initialize hash map as 0*/
 
  for(i = 0; i < arr_size; i++)
  {
    temp = sum - arr[i];
    if(temp >= 0 && binMap[temp] == 1)
    {
      printf("Pair with given sum %d is (%d, %d) \n", sum, arr[i], temp);
    }
    binMap[arr[i]] = 1;
  }
}
 
/* Driver program to test above function */
int main()
{
    int A[100],n,s,i,arr_size;
    printf("Enter total numbers you wanna enter: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
      scanf("%d", &A[i]);
    }
    printf("Enter sum to find: ");
    scanf("%d", &s);
    // int A[] = {1, 4, 45, 6, 10, 8};
    // int n = 16;
    // int arr_size = 6;
 
    // printPairs(A, arr_size, n);
    printPairs(A, n, s);
 
    getchar();
    return 0;
}