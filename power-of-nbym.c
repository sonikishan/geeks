#include <stdio.h>
 
/* Function to calculate x raised to the power y */
int power(int x, unsigned int y)
{
    if( y == 0)
        return 1;
    else if (y%2 == 0)
        return power(x, y/2)*power(x, y/2);
    else
        return x*power(x, y/2)*power(x, y/2);
 
}
 
/* Program to test function power */
int main()
{
    // int x = 2;
    // unsigned int y = 3;
    int x;
    unsigned int y;
    printf("Enter values of X and Y to get power(x,y) :");
    scanf("%d %d",&x,&y);
 
    printf("%d \n", power(x, y));
    getchar();
    return 0;
}