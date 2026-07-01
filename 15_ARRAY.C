   #include <stdio.h>
   #include <conio.h>
   int main()
   {
   int array[100];
   int n,i,min,max;
   clrscr();
   printf("Enter number of elements in an array:\n");
   scanf("%d",&n);
   printf("Read array:\n");
   for(i=0;i<n;i++)
   {
   scanf("%d\n",&array[i]);
   }
   printf("print array:\n");
   for(i=0;i<n;i++)
   {
   printf("%d \n",array[i]);
   }
   min=array[0];
   max=array[0];
   for(i=0;i<n;i++)
   {
   if(array[i]<min)
   {
   min=array[i];
   }
   if(array[i]>max)
   {
   max=array[i];
   }
   }
   printf("min value in an array=%d\n",min);
   printf("max value in an array=%d\n",max);
   getch();
   return 0;

   }