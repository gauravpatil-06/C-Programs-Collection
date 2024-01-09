#include <stdio.h>
#include <conio.h>

struct employee
{
    int emp_id;
    char name[20];
    float salary;
} e[3];

void main()
{
    int i;

    clrscr();

    for (i = 0; i <= 2; i++)
    {
        printf("Enter employee ID, Name, Salary: ");
        scanf("%d %s %f", &e[i].emp_id, e[i].name, &e[i].salary);
    }

    printf("\nEmployee Details:\n");
    for (i = 0; i <= 2; i++)
    {
        printf("\nEmployee ID = %d", e[i].emp_id);
        printf("\nEmployee Name = %s", e[i].name);
        printf("\nEmployee Salary = %f", e[i].salary);
    }

    getch();
}