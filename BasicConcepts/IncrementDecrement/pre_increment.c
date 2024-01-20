#include <stdio.h>
#include <conio.h>

void main()
{
    int m = 19, y;

    clrscr();

    printf("Initial m = %d\n", m);

    y = ++m;

    printf("After y = ++m: m = %d, y = %d\n", m, y);

    getch();
}