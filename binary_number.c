// #include <stdio.h>
// void bin(unsigned n)
// {
//     unsigned i;
//     for (i = 1 << 31; i > 0; i = i / 2)
//         (n & i)? printf("1"): printf("0");
// }
 
// int main(void)
// {
//     bin(7);
//     printf("\n");
//     bin(4);
// }


//*******************************
//**    www.CodeXtream.com     **
//*******************************
#include <stdio.h>  /*for printf() */
#include <limits.h> /*for CHAR_BIT*/
// #include <conio.h> /*for getch() */

void print_bits(int n);

int main()
{
    int n;
    printf("Enter numer :");
    scanf("%d",&n);
    printf("\n");
    print_bits(n);
    // getch();
    return 0;
}

void print_bits(int num)
{
    unsigned int n,mask,i;

    /* The following line gives
     * the no of bits present in
     * integer . In 16 bit and 32
     * bit system integer has
     * 16bit and 32bit integer size
     */
    n=sizeof(int) * CHAR_BIT;

    /*mask has the MSB(left most bit)
      *set i.e 1 */
    mask = 0x1<<(n-1);
    for(i = 0;i<n;i++)
    {
            if(num&mask)
                 putchar('1');
            else
                 putchar('0');
            /*This lines gives a space between
             * bytes */
            if((i+1)%CHAR_BIT == 0 && i<(n-1))
                putchar(' ');

            /*shift the left most bit of mask
             * by one place to right */
            mask>>=1;
    }

}