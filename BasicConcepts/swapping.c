#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b, c;

    clrscr();

    printf("Enter the values of a and b: ");
    scanf("%d %d", &a, &b);

    printf("\nBefore swapping: a = %d, b = %d", a, b);

    c = a;
    a = b;
    b = c;

    printf("\nAfter swapping: a = %d, b = %d", a, b);

    getch();
}