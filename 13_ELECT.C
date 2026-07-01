#include <stdio.h>
#include <conio.h>
int main()
{
    int i,n;
    clrscr();
    printf("Enter type of electricity bill:\n");
    if(i==1)
    {
	printf("Type of electricity bill:Domestic=%d\n",i);
    }
    else{
	printf("Type of electricity bill:commercial=%d\n");
    }
    printf("Enter number of units utilized=%d\n");
    if(n<=100)
    {
	printf("Electricity bill=%d \n",n*5);
    }
    else{
	printf("Electricity bill=%d \n",n*15);
    }
    getch();
    return 0;
}