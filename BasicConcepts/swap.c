#include <stdio.h>
#include <conio.h>

void swap();

void main()
{
    clrscr();

    swap();

    getch();
}

void swap()
{
    int x = 10, y = 20, temp;

    printf("\nBefore swapping: x = %d, y = %d", x, y);

    temp = x;
    x = y;
    y = temp;

    printf("\nAfter swapping: x = %d, y = %d", x, y);
}