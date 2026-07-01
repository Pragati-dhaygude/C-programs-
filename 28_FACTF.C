#include <stdio.h>
#include <conio.h>
int print_fact(int n);
int main(){
    int n;
clrscr();
    printf("Enter a number:\n");
    scanf("%d",&n);
    printf("factorial of %d=%d",n,print_fact(n));
getch();
    return 0;
}
int print_fact(int n){
    if(n==0 || n==1){
        return 1;
    }
     else {
       return n * print_fact(n-1);
     }
}