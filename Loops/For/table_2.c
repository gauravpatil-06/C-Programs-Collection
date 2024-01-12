#include <stdio.h>
#include <conio.h>

void main()
{
    int i = 1;

    clrscr();

    printf("Table of 2:\n");
    while (i <= 10)
    {
        printf("%d\n", (i * 2));
        i++;
    }

    getch();
}