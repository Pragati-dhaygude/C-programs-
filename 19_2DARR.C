
#include <stdio.h>
#include <conio.h>
int main() {
    int r1,r2,c1,c2;
    int a[5][5],b[5][5],sum[5][5],trans[5][5];
    int i,j;
    clrscr();
    printf("Enter no. of rows and columns in first matrix:\n");
    scanf("%d %d",&r1,&c1);
    printf("Enter elements in first matrix:\n");
    for(i=0;i<r1;i++)
    {
	for(j=0;j<c1;j++){
	    scanf("%d",&a[i][j]);
	}
    }
     printf("\nEnter no. of rows and columns in second matrix:\n");
    scanf("%d %d",&r2,&c2);
    printf("Enter elements in second matrix:\n");
    for(i=0;i<r2;i++)
    {
	for(j=0;j<c2;j++){
	    scanf("%d",&b[i][j]);
	}
    }
     printf("print first matrix:\n");

    for(i=0;i<r1;i++)
    {
	for(j=0;j<c1;j++){
	    printf("%d\n",a[i][j]);
	}
    }
     printf("print second matrix:\n");

    for(i=0;i<r2;i++)
    {
	for(j=0;j<c2;j++){
	    printf("%d\n",b[i][j]);
	}
    }
    if(r1==r2 && c1==c2){
printf("\n sum of two matrices:\n");
for(i=0;i<r1;i++)
    {
	for(j=0;j<c1;j++){
	    sum[i][j]=a[i][j]+b[i][j];
	    printf("%d\n",sum[i][j]);
	}

    }

    printf("transpose of matrix:\n");
    for(i=0;i<c1;i++)
    {
	for(j=0;j<r1;j++)
	{
	    trans[i][j]=sum[j][i];
	    printf("%d\n",trans[i][j]);
	}
    }
    }
    else{
	("addition not possible \n");
    }
    getch();
    return 0;
}