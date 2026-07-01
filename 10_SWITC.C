#include <stdio.h>
#include <conio.h>
int main()
{
int marks;
int Grade;
clrscr();
printf("Enter marks:");
scanf("%d",&marks);
switch(Grade/10){
case 10:
printf("A++ Grade /n");
break;
case 9:
printf("A+ Grade /n");
break;
case 8:
printf("B+ Grade /n");
break;
case 7:
printf("B Grade /n");
break;
case 6:
printf("C Grade /n");
break;
default:
printf("fail /n");
}
getch();
return 0;
}

