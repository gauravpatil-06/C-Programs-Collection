#include <stdio.h>
#include <conio.h>

void main()
{
    int i = 1;

    clrscr();

    printf("Numbers from 1 to 10:\n");
    while (i < 11)
    {
        printf("%d\n", i);
        i++;
    }

    getch();
}