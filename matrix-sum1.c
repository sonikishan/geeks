/* PROGRAM FOR SUM OF ROW AND COLUMN of MATRIX */
#include <stdio.h>
// #include <conio.h>
int main() {
  int i,j,k,A[10][10],R[10],C[10],m,n;
  printf(" ENTER THE SIZE OF A MATRIX \n");
  scanf("%d",&m);
  n = m;
  printf("ENTER THE ELEMENT OF A MATRIX \n");
  for(i=0;i<m;i++)
    for(j=0;j<n;j++)
      scanf("%d",&A[i][j]);
  /* Sum of rows */
  for(i=0;i<m;i++) {
    R[i]=0;
	  for(j=0;j<n;j++)
  	  R[i]=R[i]+A[i][j];
  }
  /* Sum of Column */
  for(i=0;i<n;i++) {
    C[i]=0;
	  for(j=0;j<m;j++)
		  C[i]=C[i]+A[j][i];
  }

  int sum =0,a=0;
  for (i=0; i<m; ++i) {
    sum = sum + A[i][i];
    a = a + A[i][m - i - 1];
  }
  // printf("%d\n", a);
  int max = sum;
  for (i = 0; i < m; ++i)
  {
    if (R[i] > max)
    {
      max = R[i];
    }
    if (C[i] > max)
    {
      max = C[i];
    }
    if (a > max)
    {
      max = a;
    }
  }
  printf("%d\n", max);

  // for(i=0;i<m;i++) {
  //   for(j=0;j<n;j++)
  //     printf("%4d",A[i][j]);
	 //    printf("%8d",R[i]);
	 //    printf("\n");
  //   }
  //   printf("\n");
	 //  for(j=0;j<n;j++)
  //     printf("%4d",C[j]);
 
    return 0;
  }