#include <stdio.h>
#include <conio.h>
int main() {
    int arr[50],n,key,i;
    int *ptr;
    clrscr();
    printf("Enter number of elements in an array:\n");
    scanf("%d",&n);
    printf("Enter elements in an array:\n");
    for(i=0;i<n;i++){
	scanf("%d",&arr[i]);
    }
    printf("Enter number for finding:\n");
    scanf("%d",&key);
    ptr=arr;
    for(i=0;i<n;i++){
	if(*(ptr+i) == key){
	    printf("The Key %d is found at %d\n",key,i+1);
	    getch();
	     return 0;
	}
    }

	    printf("Key %d is not found",key);


getch();
    return 0;
}