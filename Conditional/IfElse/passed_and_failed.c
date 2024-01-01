#include <stdio.h>
#include <conio.h>

void main()
{
    char name[50];
    int roll;
    float marks;

    clrscr();

    printf("Enter student information:\n");

    printf("\nEnter Name: ");
    scanf("%s", name);

    printf("Enter Roll No: ");
    scanf("%d", &roll);

    printf("Enter Marks: ");
    scanf("%f", &marks);

    printf("\nDisplaying Information:\n");
    printf("\nName: %s", name);
    printf("\nRoll No: %d", roll);
    printf("\nMarks: %.2f", marks);

    if (marks >= 35)
    {
        printf("\n\nResult: Passed");
    }
    else
    {
        printf("\n\nResult: Failed");
    }

    getch();
}