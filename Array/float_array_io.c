#include <stdio.h>
#include <conio.h>

void main()
{
    float a[5];
    int i;

    clrscr();

    for (i = 0; i <= 4; i++)
    {
        printf("\nEnter %d element: ", i);
        scanf("%f", &a[i]);
    }

    printf("\nArray elements are:\n");
    for (i = 0; i <= 4; i++)
    {
        printf("\na[%d] = %f", i, a[i]);
    }

    getch();
}