/* Program for rounding floating point numbers */
#include <stdio.h>
 
int roundNo(float num)
{
    return num < 0 ? num - 0.5 : num + 0.5;
}
 
int main()
{
	float n;
	printf("Enter Number:");
	scanf("%f", &n);
    printf("Rounded number is: %d \n", roundNo(n));
    getchar();
    return 0;
}