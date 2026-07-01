#include <stdio.h>
#include <conio.h>
int main()
{
int i=1,choice;
clrscr();
printf("****Menu**** \n");
printf("1.for loop:\n");
printf("2.while loop:\n");
printf("3.do while loop:\n");
printf("4.exit:\n");
printf("Enter your choice:\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("for loop:\n");
for(i=1;i<=10;i++)
{
printf("%d \n",i);
}
break;
case 2:
printf("while loop:\n");
while(i<=10)
{
printf("%d \n",i);
i++;
}
break;
case 3:
printf("do while loop:\n");
do{
printf("%d \n",i);
i++;
}while(i<=10);
break;
case 4:
printf("exit \n");
default:
printf("thank you \n");

}
getch();
return 0;
}