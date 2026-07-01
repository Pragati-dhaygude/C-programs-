#include <stdio.h>
#include <conio.h>
int main() {
    int arr[5]={2, 3, 4, 5, 8};
    int *ptr;
    int i;
clrscr();
    ptr=arr;
    printf("Increamenting pointers:\n");
    for(i=0;i<5;i++){
        printf("value=%d, Address=%u \n",*ptr,ptr);
        ptr++;
    }
getch();
    return 0;
}