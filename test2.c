// #include <stdlib.h>
#include <stdio.h>

int main()
{
 	// char arr[20] = "hello world";
 	// printf("%d",sizeof(arr)); 
	// int arr[]={1,2,3,4,5};
	// int arr[4]={1,2,3};
 	// int arr[5]={1,2,3,4,5};
 	// int arr[5]={1,2,3,4,5,6};

 // 	int temp,i,j;
	// int num[7]={7,6,5,4,3,2,1};
	// for (i=1; i<6; i++)
 //  		for (j=0; j<6; j++) {
 //       		if(num[i]>num[i+1]) {
 //         		temp=num[i];
 //         		num[i]=num[i+1];
 //         		num[i+1]=temp;
 //      		}
 //   		}
	// for (i=0; i<7; i++)
 //    	printf("%d \n",num[i]);

	// int i;
	// int num[3][5]={1,2,0,4,5,{6},{3,7,10}};
	// printf("%d %d %d %d",num[0][3],num[1][2],num[2][0],num[2][4]);

	// int arr[3][2]={{1,2},{3,4},{5,6}};
	// printf("%d %d %d",arr[0][3],arr[1][2],arr[2][0]);

	// int x = 5, y = 15;
 //  int * p1, * p2;
 //  p1 = &x;  
 //  p2 = &y; 
 //  *p1 = 10;          
 //  *p2 = *p1;         
 //  p1 = p2;           
 //  *p1 = 20;          
 //  printf("%d %d",x,y);

	// int num[5] = {0,0,0,0,0};
 //  int * p;
 //  p = num;  
 //  *p = 1;
 //  p++;  
 //  *p = 2;
 //  p = &num[2];  
 //  *p = 3;
 //  p = num + 3;  
 //  *p = 4;
 //  p = num;
 //  *(p+4) = 5;
 //  int n;
 //  for (n=0; n<5; n++)
 //    printf("%d",num[n]);

	// int a[1] = {34};    // Line 1
	// int b = (int) *a;   // Line 2
	// int c = (int *) a;  // Line 3
	// int d = (long) a;    // Line 4
	// int e = (int) a[0]; // Line 5

	// printf("%d %d %d %d \n",b,c,d,e);

	// int x1 = 10;
	// int *x2, **x3, ***x4;
	// x2 = &x1;
	// x3 = &x2;
	// x4 = &x3;
	// printf("%d%d%d%d", (x1==10), (*x2==10),( *x3==10), (***x4==10) );

	// int arr[3][3];
	// int i, j, sum;
	// i = 0;
	// while(i<3)
	// {
 //    	sum += *(*(arr+i)+(i++));
	// }
	// printf("sum:%d", sum);

	// char *a="HELLO\0 HI";
 //    printf("%s",a);

	// int a=10;
	// int *p;
	// p=&a;
	// *p++;
	// printf("%d %d", *p,a);

	// char str[4] = "abe";
	// char c = 'd';
	// char tmp = 'f';
	// tmp = str[0];
	// str[0] = 'c';
	// c = tmp;
	// printf("%c%c%c \n",str[0],c,tmp); 

	// char *str1 = "Hello World";
 //    char *str2 = "Hello";

 //    if(*str1 == *str2)
 //        printf("Here \n ");

 //    else
 //        printf("There \n");

	char char_array[]="Hello\0World";
    char *str="Hello\0World";
    printf("%s %c\n",char_array,char_array[1]);
    printf("%s %c\n",str,str[1]);
    printf("%d %d\n",sizeof(char_array),sizeof(str));
 	return 0;
}