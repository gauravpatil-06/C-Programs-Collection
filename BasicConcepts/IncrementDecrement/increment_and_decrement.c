#include <stdio.h>
#include <conio.h>

void main()
{
    int a = 5, b;

    clrscr();

    printf("Initial a = %d\n", a);

    b = ++a;
    printf("After b = ++a: a = %d, b = %d\n", a, b);

    b = a++;
    printf("After b = a++: a = %d, b = %d\n", a, b);

    getch();
}