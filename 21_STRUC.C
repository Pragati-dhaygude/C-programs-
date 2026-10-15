#include <stdio.h>
#include <conio.h>
union product{
    int product_id;
    float price;
};
int main() {
    union product p[10];
    int n,i,choise[10];
    clrscr();
    printf("Enter no. of product:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("product=%d\n",i+1);
        printf("1.product id\n");
        printf("2.price \n");
        printf("Enter choise:\n");
        scanf("%d",&choise[i]);
        if(choise[i]==1)
        {
            printf("Enter product_id:\n");
            scanf("%d",&p[i].product_id);
        }
        else if(choise[i]==2)
        {
            printf("enter price:\n");
            scanf("%d",&p[i].price);
        }else{
            printf("Not valid\n");
        }
    }
printf("Product details\n");
for(i=0;i<n;i++){
    printf("product=%d \n",i+1);
    if(choise[i]==1){
        printf("product id=%d\n",p[i].product_id);
    }
    else if(choise[i]==2){
        printf("price=%d\n",p[i].price);
    }
}
getch();
    return 0;
}