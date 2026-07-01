#include <stdio.h>
#include <conio.h>
int main()
{
 int a,b;
 clrscr();
 printf("enter two numbers:");
 scanf("%d,%d",&a,&b);
 (a>b)? printf("a is greatest"):printf("b is greatest");
 getch();
 return 0;
}