#include <stdio.h>
#include <conio.h>

void main()
{
    int a[3][3], b[3][3], c[3][3], i, j;

    clrscr();

    printf("Enter 1st Matrix:\n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter 2nd Matrix:\n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    printf("\nAddition of 3x3 Matrices:\n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

    getch();
}