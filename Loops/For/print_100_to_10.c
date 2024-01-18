#include <stdio.h>
#include <conio.h>

void main()
{
    int i = 100;

    clrscr();

    printf("Numbers from 100 down to 10:\n");
    while (i >= 10)
    {
        printf("%d\n", i);
        i--;
    }

    getch();
}