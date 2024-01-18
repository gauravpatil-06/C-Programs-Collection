#include <stdio.h>
#include <conio.h>

void main()
{
    int i;

    clrscr();

    printf("Odd numbers from 1 to 20:\n");
    for (i = 1; i <= 20; i += 2)
    {
        printf("%d\n", i);
    }

    getch();
}