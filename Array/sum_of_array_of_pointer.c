#include <stdio.h>
#include <conio.h>

void main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int *ptr, sum = 0, i;

    clrscr();

    printf("Array Elements: 10, 20, 30, 40, 50\n");

    ptr = &a[0];
    for (i = 0; i < 5; i++)
    {
        sum = sum + *ptr;
        ptr++;
    }

    printf("\nSum of all elements = %d", sum);

    getch();
}