#include <stdio.h>
#include <conio.h>
void print_swap(int a[],int b[]);
int main() {
    int a[5],b[5],i;
    clrscr();
    printf("Enter elements in first array:\n");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter elements in second array:\n");
    for(i=0;i<5;i++){
        scanf("%d",&b[i]);
    }
    print_swap(a,b);
    printf("swaped first array :\n");
    for(i=0;i<5;i++){
        printf("%d\n",a[i]);
    }
     printf("swaped second array :\n");
    for(i=0;i<5;i++){
        printf("%d\n",b[i]);
    }
    getch();
    return 0;
}
void print_swap(int a[],int b[]){
    int i,flag;
    for(i=0;i<5;i++){
        flag=a[i];
        a[i]=b[i];
        b[i]=flag;
    }
    
}