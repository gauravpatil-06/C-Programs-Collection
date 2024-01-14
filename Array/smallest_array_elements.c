#include <stdio.h>
#include <conio.h>

void main()
{
    int a[5], i, small;

    clrscr();

    printf("Enter 5 array elements:\n");
    for (i = 0; i < 5; i++)
    {
        printf("Element %d: ", i);
        scanf("%d", &a[i]);
    }

    small = a[0];
    for (i = 1; i < 5; i++)
    {
        if (a[i] < small)
        {
            small = a[i];
        }
    }

    printf("\nSmallest array element = %d", small);

    getch();
}