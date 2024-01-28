#include <stdio.h>
#include <conio.h>

void swap(int x, int y);

void main()
{
    int a = 10, b = 9;

    clrscr();

    swap(a, b);

    getch();
}

void swap(int x, int y)
{
    int temp;

    printf("\nBefore swapping: x = %d, y = %d", x, y);

    temp = x;
    x = y;
    y = temp;

    printf("\nAfter swapping: x = %d, y = %d", x, y);
}

