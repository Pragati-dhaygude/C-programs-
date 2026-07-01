#include  <stdio.h>
int main()
{
   int a,b,c;
   clrscr();
   printf("enter three numbers:\n");
   scanf("%d'%d'%d",&a,&b,&c);
   if(a>b)
   {
    if(a>c){
	printf("a is largest number\n",a);
    }
    else{
	printf("c is largest number\n",c);
    }
    }
    else{
	printf("b is largest number\n",b);
    }
    getch();
    return 0;
}
