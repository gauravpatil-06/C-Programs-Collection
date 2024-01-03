#include <stdio.h>
#include <conio.h>

void main()
{
    int i = 10;

    clrscr();

    printf("Even numbers from 10 to 20:\n");
    while (i <= 20)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
        i++;
    }

    getch();
}