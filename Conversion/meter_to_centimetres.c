#include <stdio.h>
#include <conio.h>

void main()
{
    int m, c;

    clrscr();

    printf("Enter the value in Meters: ");
    scanf("%d", &m);

    c = m * 100;

    printf("\nCentimetres = %d", c);

    getch();
}