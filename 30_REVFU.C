#include <stdio.h>
#include <conio.h>
int main() {
    int a[5],i;
    int *ptr;
clrscr();
    printf("Enter five elements in an array:\n");
    for(i=0;i<5;i++){
    scanf("%d", &a[i]);
    }
ptr = &a[4];
printf("Reverse array:\n");
for(i=0;i<5;i++){
    printf("%d",*ptr);
    ptr--;
}
getch();
return 0;
}