#include <stdio.h>
int main()
{
    int a[10][10], b[10][10], sum[10][10];
    int r,c,i,j;
    // Enter number of rows and columns
    printf("Enter number of rows and columns:");
    scanf("%d %d",&r,&c);
    // Enter elements of first matrix
    printf("Enter elements of first matrix:");
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            scanf("%d",&a[i][j]);
        }
    }
    // Enter elements of second matrix
    printf("Enter elements of second matrix:");
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            scanf("%d",&b[i][j]);
        }
    }   
    // Adding two matrices
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    // Display the sum of two matrices
    printf("Sum of two matrices:\n");
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
