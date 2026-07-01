#include <stdio.h>
#include <conio.h>
int main()
{
int arr[100];
int n,i,key,flag=0;
clrscr();
printf("Enter number of elements in an array:\n");
scanf("%d",&n);
printf("Read array:\n");
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
}
printf("Print array:\n");
for(i=0;i<n;i++)
{
printf("%d\n",arr[i]);
}
 printf("Enter element to search:\n");
 scanf("%d",&key);
 for(i=0;i<n;i++)
 {
 if(arr[i]==key)
 {
 flag=1;
 break;
 }
}
 if(flag==1){
 printf("key found at location=%d\n",i+1);
 }
 else{
 printf("key not found\n");
 }

 getch();
 return 0;
}