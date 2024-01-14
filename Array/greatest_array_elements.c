#include <stdio.h>
#include <conio.h>

void main()
{
    int a[5], i, large;

    clrscr();

    for (i = 0; i <= 4; i++)
    {
        printf("\nEnter %d element: ", i);
        scanf("%d", &a[i]);
    }

    large = a[0];
    for (i = 0; i <= 4; i++)
    {
        if (a[i] > large)
        {
            large = a[i];
        }
    }

    printf("\nGreatest array element: %d", large);
    getch();
}