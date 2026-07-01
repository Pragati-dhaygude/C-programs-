#include <stdio.h>
#include <conio.h>
int main()
{
int a,b,c,d,e, Ave;
clrscr();
printf("enter five numbers:");
scanf("%d,%d,%d,%d,%d",&a,&b,&c,&d,&e);
Ave=(a+b+c+d+e)/5;
printf("Ave=%d",Ave);
getch();
return 0;
}