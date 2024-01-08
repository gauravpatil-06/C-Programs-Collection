#include <stdio.h>
#include <conio.h>

void main()
{
    int i, j;
    int a[2][2], t[2][2];

    clrscr();

    printf("Enter elements of 2x2 Matrix:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nOriginal Matrix:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            t[j][i] = a[i][j];
        }
    }

    printf("\nTranspose Of Matrix:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d\t", t[i][j]);
        }
        printf("\n");
    }

    getch();
}