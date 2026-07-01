#include <stdio.h>
#include <conio.h>

void main() {
    FILE *fp1, *fp2;
    int ch;

    clrscr();

    fp1 = fopen("source.txt", "r");
    if (fp1 == NULL) {
	printf("Source file not found");
	getch();
	return;
    }

    fp2 = fopen("destination.txt", "w");
    if (fp2 == NULL) {
	printf("Destination file cannot be created");
	fclose(fp1);
	getch();
	return;
    }

    while ((ch = fgetc(fp1)) != EOF) {
	fputc(ch, fp2);
    }

    fclose(fp1);
    fclose(fp2);

    printf("\nFile copied successfully!");
    getch();
}
