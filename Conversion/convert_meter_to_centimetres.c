#include <stdio.h>
#include <conio.h>

void main()
{
    int m, c;

    clrscr();

    printf("\nEnter value in Centimetres: ");
    scanf("%d", &c);

    m = c / 100;

    printf("\nMetre = %d", m);

    getch();
}