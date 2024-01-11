#include <stdio.h>
#include <conio.h>

struct employee
{
    int employee_no;
    char name[20];
    float salary;
};

void main()
{
    struct employee e = {1, "Gaurav Patil", 100000.00};

    clrscr();

    printf("Employee Structure Details:\n");
    printf("\nEmployee No: %d", e.employee_no);
    printf("\nName: %s", e.name);
    printf("\nSalary: %.2f", e.salary);

    getch();
}