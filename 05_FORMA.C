#include <stdio.h>
int main()
{
int type,size,formatespecifier;
int bool=1;
  printf("%d,%d,%d /n", type,size ,formatespecifier);
   printf("%d,%d,%d /n",bool,1 ,%d);
   printf("%d,%d,%d /n",char, >=8,%c);
   printf("%d,%d,%d /n","signed char",>=8 ,"%c");
   printf("%d,%d,%d /n","unsigned char",>=8,"%c");
   printf("%d,%d,%d /n",short,>=16,"%hi or %hd");
   printf("%d,%d,%d /n","short int",>=16,"%hi or %hd");
   printf("%d,%d,%d /n","signed short" ,>=16,"%hi or %hd");
   printf("%d %d %d /n","int,signed,signed int",>=16,"%i or %d");
   return 0;
}