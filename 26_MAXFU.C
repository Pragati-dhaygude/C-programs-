#include <stdio.h>
#include <conio.h>
void max_no(int a[]);
void min_no(int a[]);
int main() {
    int a[5],i;
    clrscr();
    printf("Enter elements in an array:\n");
    for(i=0;i<5;i++){
    scanf("%d",&a[i]);
    }
    max_no(a);
    min_no(a);
    getch();
    return 0;
}
void max_no(int a[]){
    int max = a[0],i;
    for(i=0;i<5;i++){
        if(a[i] > max){
            max = a[i];
        }
    }
    printf("max=%d\n",max);
}
void min_no(int a[]){
    int min = a[0],i;
    for(i=0;i<5;i++){
        if(a[i]< min){
        min = a[i];
        }
    }
   printf("min=%d\n",min);
}