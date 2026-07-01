#include <stdio.h>
#include <conio.h>
int main()
{
int a=2,b=3,c=5,d=2,e=1;
int S,X,Y,Z;
clrscr();
S=a+b*c;
printf("S=%d/n",S);
X=a+b*c/d%2 ;
printf("X=%d/n",X);
Y=d*2/a-b;
printf("Y=%d /n",Y);
Z=a+b*c-(d++)/e;
printf("Z=%d /n",Z);
Z=a%b+5*c/3*d;
printf("Z=%d /n",Z);
Z=a^b+c%d-a-3*c;
printf("Z=%d /n",Z);
getch();
return 0;
}