#include <stdio.h>
#include <conio.h>
int main()
{
int arr[100];
int n,i,j,temp,flag=0;
clrscr();
printf("Enter number of element in an array:\n");
scanf("%d",&n);
printf("Read array:\n");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("Print array:\n");
for(i=0;i<n;i++)
{
printf("%d\n",arr[i]);
}
printf("Sorted array using selection sorting:\n");
for(i=0;i<n-1;i++)
{
for(j=i;j<n;j++)
{
if(arr[i]>arr[j])
{
temp=arr[i] ;
arr[i]=arr[j];
arr[j]=temp;
}
}
}
for(i=0;i<n;i++){
printf("%d\n",arr[i]);
}
printf("Sorted array using bubble sorting:\n");
for(i=0;i<n-1;i++)
{
flag=0;
for(j=0;j<n-1;j++)
{
if(arr[j]>arr[j+1])
{
temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;

}
}
}

for(i=0;i<n;i++){
printf("%d",arr[i]);
}
getch();
return 0;
}