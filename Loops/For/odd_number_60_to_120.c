#include <stdio.h>
#include <conio.h>

void main()
{
    int i = 60;

    clrscr();

    printf("Odd numbers from 60 to 120:\n");
    while (i <= 120)
    {
        if (i % 2 == 1)
        {
            printf("%d\n", i);
        }
        i++;
    }

    getch();
}