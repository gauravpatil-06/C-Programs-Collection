#include <stdio.h>
#include <conio.h>

void main()
{
    int num = 10;

    clrscr();

    printf("Odd numbers between 10 and 20:\n");

    while (num <= 20)
    {
        if (num % 2 != 0)
        {
            printf("%d\n", num);
        }

        num++;
    }

    getch();
}