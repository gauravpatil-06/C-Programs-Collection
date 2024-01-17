#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b, c, big;

    clrscr();

    printf("Enter any three values: ");
    scanf("%d %d %d", &a, &b, &c);

    big = a > b ? (a > c ? a : c) : (b > c ? b : c);

    printf("\nGreatest number = %d", big);

    getch();
}