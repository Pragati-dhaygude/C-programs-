#include <stdio.h>
#include <math.h>
#include <conio.h>
void print_prime(int n);
int print_arm(int n);
int main() {
    int n;
    clrscr();
    printf("Enter number:\n");
    scanf("%d",&n);
print_prime(n);
if(print_arm(n)){
    printf("armstrong number=%d",n);
}else{
    printf("not an armstrong number=%d",n);
}
    getch();
    return 0;
}
void print_prime(int n){
    int i,flag=0;
    if(n <= 1){
	printf("not a prime number:\n");
	return ;
    }
    for(i=2;i<n/2;i++){
	if(n%i==0){
	    flag=1;
	    break;
	}
    }
	if(flag==0){
	    printf("prime number = %d\n",n);
	}else{
	    printf("not prime number = %d\n",n);
	}
}
int print_arm(int n){
    int count=0,sum=0,realno=n,digit;
    while(n != 0){
	count++;
	n /= 10;
    }
    n= realno;
    while(n != 0){
	digit= n%10;
	sum += pow(digit,count);
	n /=10;
    }
    return (sum== realno);

}