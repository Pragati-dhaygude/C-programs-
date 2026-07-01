#include <stdio.h>
#include <conio.h>
int main()
{
    int i;
    clrscr();
    printf("print even numbers:\n");
    for(i=1;i<=10;i++)
    {
	if(i%2==0)
	{
	    if(i==8)
	    {
		continue;
	    }
	    printf("%d\n",i);
	    }
    }
    getch();
    return 0;
}