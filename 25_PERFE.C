#include <stdio.h>
#include <conio.h>
int isperfect(int n);
int main() {
    int n,i;
clrscr();
    printf("perfect numbers between 1-50:\n");
    for(i=1;i<=50;i++){
    if(isperfect(i))
    {
	printf("%d \n",i);
    }
}
getch();
    return 0;
}
int isperfect(int n){
    int sum=0,i;
    for(i=1;i<= n/2;i++){
     if(n % i == 0){
	 sum += i;
     }   
    }
    if(sum == n){
        return 1;
    }else{
        return 0;
    }
}