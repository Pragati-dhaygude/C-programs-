#include  <stdio.h>
int main()
{
   int marks;
   clrscr();
   printf("enter marks of the student:\n");
   scanf("%d",&marks);
   if(marks>90)
   {
    printf("A grade\n");
   }
   else if(marks>80)
   {
    printf("B grade\n");
   }
   else if(marks>70)
   {
    printf("C grade\n");
   }
   else if(marks>40)
   {
    printf("D grade\n");
   }
else{
    printf("student is fail\n");
}
    getch();
    return 0;
}


