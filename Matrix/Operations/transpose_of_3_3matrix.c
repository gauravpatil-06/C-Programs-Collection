#include <stdio.h>
#include <conio.h>

void main()
{
    int a[3][3], t[3][3];
    int i, j;

    clrscr();

    printf("Enter elements of 3x3 matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nOriginal Matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            t[j][i] = a[i][j];
        }
    }

    printf("\nTranspose Of Matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", t[i][j]);
        }
        printf("\n");
    }

    getch();
}