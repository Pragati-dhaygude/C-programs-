#include <stdio.h>
#include <conio.h>
int main() {
    char str1[100],str2[100],copy[100],concat[200];
    int i,length=0,j;
    clrscr();
    printf("Enter strings in an array:\n");
    fgets(str1,100,stdin);
    for(i=0;str1[i]!='\0';i++){
	length++;
    }
printf("length of str1=%d \n",length);
printf("string in reverse order:\n");
for(i=length-1;i>=0;i--){
    printf("%c",str1[i]);
}
printf("\ncopy string:\n");
for(i=0; str1[i] != '\0';i++)
{
    copy[i]=str1[i];
}
copy[i]='\0';
printf("str1=%s",str1);
printf("copy string=%s",copy);
printf("\n");
printf("Enter first string for comparison:\n");
fgets(str1,100,stdin);
printf("Enter second string for comparison:\n");
fgets(str2,100,stdin);
i=0;
while(str1[i]!='\0'&& str2[i]!='\0'&& str1[i]==str2[i])
{
    i++;
}
    if(str1[i]==str2[i])
    {
	printf("strings are equal\n");
    }
    else if(str1[i]>str2[i])
    {
	printf("string 1 is greater\n");
    }
    else{
	printf("string 2 is greater\n");
    }

printf("Enter first string for concatination:\n");
fgets(str1,100,stdin);
printf("Enter second string for concatination:\n");
fgets(str2,100,stdin);
i=0;
while(str1[i] !='\0')
{
    concat[i]=str1[i];
    i++;
};
j=0;
while(str2[j] !='\0'){
    concat[i]=str2[j];
    i++;
    j++;
}
concat[i]='\0';
printf("Concatation of string=%s",concat);
getch();
    return 0;
}