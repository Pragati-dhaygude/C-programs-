#include  <stdio.h>
int main()
{
   int marks:
   printf("enter marks of the student:\n");
   scanf("%d",&marks);
   if(marks>90)
   {
    ptintf("'A' grade\n");
   }
   else if(marks>80)
   {
    printf("'B' grade\n");
   }
   else if(marks>70)
   {
    printf("'c' grade\n");
   }
   else if(marks>40)
   {
    printf("'d' grade\n");
   }
else{
    printf("student is fail\n");
}
    return 0;
}
