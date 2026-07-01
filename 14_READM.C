#include <stdio.h>

int main() {
    int array[9]={2,3,8,9,6,5,3,1,5};
    int choise,n=9,i,add=0;
    do{
    printf("*MENU DRIVEN*\n");
    
    printf("1.Print Array \n");
    printf("2.Print addition of array elements \n");
    printf("3.Exit\n");
    
    printf("Enter choise:\n");
    scanf("%d",&choise);
    switch(choise){
        
     case 1:
     printf("1.Print Array\n");
     for(i=0;i<n;i++)
     {
         printf("%d \n",array[i]);
     }
     break;
     case 2:
     printf("2.print Addition of array elements:\n");
    
     for(i=0;i<n;i++)
     {
         add=add+array[i];
     }
     printf("Addition of array elements=%d\n",add);
     break;
    
    case 3:
    printf("3.Exit\n");
    break;
default:
printf("Invalid choise \n");
}
}while(choise !=3);
    return 0;
}