#include <stdio.h>
#include <conio.h>

void main()
{
    int num;

    clrscr();

    printf("Odd numbers from 10 to 20:\n");
    for (num = 10; num <= 20; num++)
    {
        if (num % 2 != 0)
        {
            printf("%d\n", num);
        }
    }

    getch();
}