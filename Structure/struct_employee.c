#include <stdio.h>
#include <conio.h>

struct employee
{
    int emp_id;
    char name[50];
    int age;
    int salary;
} e;

void main()
{
    clrscr();

    printf("Enter employee ID, Name, Age, Salary:\n");
    scanf("%d %s %d %d", &e.emp_id, e.name, &e.age, &e.salary);

    printf("\nEmployee Details:\n");
    printf("\nEmployee ID: %d", e.emp_id);
    printf("\nEmployee Name: %s", e.name);
    printf("\nEmployee Age: %d", e.age);
    printf("\nEmployee Salary: %d", e.salary);

    getch();
}