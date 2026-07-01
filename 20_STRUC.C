#include <stdio.h>
#include <conio.h>
struct employee {
    int code;
    char name[100];
    float salary;
    int age;
    char department[50];
};

int main() {

    struct employee emp[100];
    int n = 0, code, choice, found, i, j;
       clrscr();
    do {
	printf("\n----- EMPLOYEE MANAGEMENT SYSTEM -----");
	printf("\n1. Accept Employee Details");
	printf("\n2. Display Employee Details");
	printf("\n3. Search Employee by Code");
	printf("\n4. Modify Employee Details");
	printf("\n5. Delete Employee Record");
	printf("\n6. Exit");
	printf("\nEnter your choice:\n ");
	scanf("%d", &choice);

	switch (choice) {

	case 1:
	    printf("Enter number of employees:\n ");
	    scanf("%d", &n);

	    for (i = 0; i < n; i++) {
		printf("\nEnter employee code:\n ");
		scanf("%d", &emp[i].code);

		printf("Enter name:\n ");
		scanf("%s",&emp[i].name);

		printf("Enter salary:\n ");
		scanf("%.2f", &emp[i].salary);

		printf("Enter age:\n ");
		scanf("%d",&emp[i].age);

		printf("Enter department:\n ");
		scanf("%s", &emp[i].department);
	    }
	    break;

	case 2:
	    for (i = 0; i < n; i++) {
		printf("\nCode: %d", emp[i].code);
		printf("\nName: %s", emp[i].name);
		printf("\nSalary: %.2f", emp[i].salary);
		printf("\nAge: %d", emp[i].age);
		printf("\nDepartment: %s\n", emp[i].department);
	    }
	    break;

	case 3:
	    printf("Enter employee code to search: ");
	    scanf("%d", &code);
	    found = 0;

	    for (i = 0; i < n; i++) {
		if (emp[i].code == code) {
		    printf("\nEmployee Found!");
		    printf("\nName: %s", emp[i].name);
		    printf("\nSalary: %.2f", emp[i].salary);
		    printf("\nAge: %d", emp[i].age);
		    printf("\nDepartment: %s\n", emp[i].department);
		    found = 1;
		    break;
		}
	    }
	    if (!found)
		printf("Employee not found!\n");
	    break;

	case 4:
	    printf("Enter employee code to modify:\n ");
	    scanf("%d", &code);
	    found = 0;

	    for (i = 0; i < n; i++) {
		if (emp[i].code == code) {
		    printf("Enter new name:\n ");
		    scanf("%s",&emp[i].name);

		    printf("Enter new salary:\n ");
		    scanf("%.2f", &emp[i].salary);

		    printf("Enter new age:\n ");
		    scanf("%d", &emp[i].age);

		    printf("Enter new department:\n ");
		    scanf("%s",&emp[i].department);

		    printf("Updated successfully!\n");
		    found = 1;
		    break;
		}
	    }
	    if (!found)
		printf("Employee not found!\n");
	    break;

	case 5:
	    printf("Enter employee code to delete: ");
	    scanf("%d", &code);
	    found = 0;

	    for (i = 0; i < n; i++) {
		if (emp[i].code == code) {
		    for (j = i; j < n - 1; j++)
			emp[j] = emp[j + 1];
		    n--;
		    printf("Employee deleted successfully!\n");
		    found = 1;
		    break;
		}
	    }
	    if (!found)
		printf("Employee not found!\n");
	    break;

	case 6:
	    printf("Exiting program...\n");
	    break;

	default:
	    printf("Invalid choice!\n");
	}

    } while (choice != 6);
    getch();
    return 0;
}

