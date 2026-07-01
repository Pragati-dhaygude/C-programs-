#include <stdio.h>
#include <conio.h>
int main() {
    FILE *fp;
    int roll;
    char name[50];
    float marks;
    clrscr();
    fp = fopen("stud.txt", "w");

    if (fp == NULL) {
	printf("File cannot be created\n");
	return 1;
    }
    printf("Enter Roll Number: ");
    scanf("%d", &roll);

    printf("Enter Name: ");
    scanf("%s", name);

    printf("Enter Marks: ");
    scanf("%f", &marks);

	fprintf(fp, "%d %s %.2f\n", roll, name, marks);
    fclose(fp);


    fp = fopen("stud.txt", "r");
    if (fp == NULL) {
	printf("File cannot be opened\n");
	getch();
	return 1;
    }

	printf("\nStudent Data from file:\n");
    fscanf(fp, "%d %s %f", &roll, name, &marks);
    printf("Roll Number: %d\n", roll);
    printf("Name: %s\n", name);
    printf("Marks: %.2f\n", marks);

    fclose(fp);
    getch();
    return 0;
}