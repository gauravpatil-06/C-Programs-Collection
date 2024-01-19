#include <stdio.h>
#include <conio.h>

void main()
{
    int a, square;

    clrscr();

    printf("Enter any number: ");
    scanf("%d", &a);

    square = a * a;

    printf("\nSquare = %d", square);

    getch();
}