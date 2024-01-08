#include <stdio.h>
#include <conio.h>

void main()
{
    int a[2][2] = { {1, 2}, {3, 4} };
    int i, j;

    clrscr();

    for (i = 0; i <= 1; i++)
    {
        for (j = 0; j <= 1; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    getch();
}