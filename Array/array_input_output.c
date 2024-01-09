#include <stdio.h>
#include <conio.h>

void main()
{
    int a[5], i;

    clrscr();

    for (i = 0; i <= 4; i++)
    {
        printf("\nEnter %d element: ", i);
        scanf("%d", &a[i]);
    }

    printf("\nArray elements are:\n");
    for (i = 0; i <= 4; i++)
    {
        printf("\na[%d] = %d", i, a[i]);
    }

    getch();
}