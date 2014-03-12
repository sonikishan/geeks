#include <stdio.h>
#include <stdlib.h>
 
int main() {
 
    int k, n, i, j;
 
    // do {
        printf("Specify the size of the matrix (nxk)\n");
        scanf("%d %d", &n, &k);
    // } //while(n>=20||n<0||k>=20||k<0);
 
    int tab[n][k];
 
    for (i=0; i<n; i++) {
        for (j=0; j<k; j++) {
            // printf("Specify the element (%d,%d)", i, j);
            scanf("%d", &tab[i][j]);
        }
    }
    int sum_row[n], sum_column[k];
    for (i=0; i<n; i++) {
        for (j=0; j<k; j++) {
            sum_row[i]+=tab[i][j];
            sum_column[j]+=tab[i][j];
        }
    }
 
    for (i=0; i<n; i++) {
        for (j=0; j<k; j++) printf("%d  ", tab[i][j]);
        printf("\n");
    }
    for (i=0; i<n; i++) printf("sum of row %d equals: %d\n", i, sum_row[i]);
    for (j=0; j<k; j++) printf("sum of column %d equals: %d\n", j, sum_column[j]);
 
    system("PAUSE");
    return 0;
}    