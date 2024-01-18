#include <stdio.h>
#include <conio.h>

void main()
{
    int i = 1;

    clrscr();

    printf("Odd numbers from 1 to 20:\n");
    while (i <= 20)
    {
        if (i % 2 == 1)
        {
            printf("%d\n", i);
        }
        i++;
    }

    getch();
}