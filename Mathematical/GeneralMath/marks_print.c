#include <stdio.h>
#include <string.h>
#include <conio.h>

struct student
{
    char first_Name[50];
    char last_Name[50];
    int roll_no;
    char branch[50];
    float percent;
};

void main()
{
    struct student st[2];
    int i;

    clrscr();

    printf("Enter data of 2 students:\n");
    for (i = 0; i < 2; i++)
    {
        printf("\nStudent %d:\n", i + 1);
        printf("Enter first name: ");
        scanf("%s", st[i].first_Name);

        printf("Enter last name: ");
        scanf("%s", st[i].last_Name);

        printf("Enter Branch: ");
        scanf("%s", st[i].branch);

        printf("Enter Roll-No: ");
        scanf("%d", &st[i].roll_no);

        printf("Enter Percentage: ");
        scanf("%f", &st[i].percent);
    }

    printf("\nDisplaying Student Information:\n");
    for (i = 0; i < 2; i++)
    {
        printf("\nFirst name: %s", st[i].first_Name);
        printf("\nLast name: %s", st[i].last_Name);
        printf("\nRoll_No: %d", st[i].roll_no);
        printf("\nBranch: %s", st[i].branch);
        printf("\nMarks: %.1f%%\n", st[i].percent);
    }

    getch();
}
