#include <stdio.h>
#include <conio.h>

void main()
{
    int salary;

    clrscr();

    printf("Enter salary: ");
    scanf("%d", &salary);

    if (salary == 5000)
    {
        printf("Peon");
    }
    else if (salary == 7000)
    {
        printf("Caretaker");
    }
    else if (salary == 2000)
    {
        printf("Clerk");
    }
    else if (salary == 60000)
    {
        printf("HOD");
    }
    else
    {
        printf("Enter valid salary");
    }

    getch();
}