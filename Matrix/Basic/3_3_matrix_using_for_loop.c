#include <stdio.h>
#include <conio.h>

void main()
{
    int a[3][3];
    int i, j;

    clrscr();

    printf("Enter matrix elements:\n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nMatrix display:\n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    getch();
}