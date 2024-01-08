#include <stdio.h>
#include <conio.h>

void main()
{
    int a[3][2];
    int i, j;

    clrscr();

    printf("Enter matrix elements:\n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nMatrix display:\n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 1; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    getch();
}