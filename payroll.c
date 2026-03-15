#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float basicPay;
    float allowances;
    float deductions;
    float netSalary;
};

struct Employee emp[100];
int count = 0;

// Function to add employee
void addEmployee()
{
    printf("\nEnter Employee ID: ");
    scanf("%d", &emp[count].id);

    printf("Enter Employee Name: ");
    scanf("%s", emp[count].name);

    printf("Enter Basic Pay: ");
    scanf("%f", &emp[count].basicPay);

    printf("Enter Allowances: ");
    scanf("%f", &emp[count].allowances);

    printf("Enter Deductions: ");
    scanf("%f", &emp[count].deductions);

    emp[count].netSalary =
        emp[count].basicPay +
        emp[count].allowances -
        emp[count].deductions;

    count++;

    printf("Employee Added Successfully!\n");
}

// Function to display employees
void displayEmployee()
{
    int i;

    if (count == 0)
    {
        printf("No employees found!\n");
        return;
    }

    printf("\n------ Employee Payroll Details ------\n");

    for (i = 0; i < count; i++)
    {
        printf("\nEmployee %d\n", i + 1);
        printf("ID: %d\n", emp[i].id);
        printf("Name: %s\n", emp[i].name);
        printf("Basic Pay: %.2f\n", emp[i].basicPay);
        printf("Allowances: %.2f\n", emp[i].allowances);
        printf("Deductions: %.2f\n", emp[i].deductions);
        printf("Net Salary: %.2f\n", emp[i].netSalary);
    }
}

int main()
{
    int choice;

    while (1)
    {
        printf("\n===== Employee Payroll System =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                addEmployee();
                break;

            case 2:
                displayEmployee();
                break;

            case 3:
                printf("Exiting program...\n");
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}
