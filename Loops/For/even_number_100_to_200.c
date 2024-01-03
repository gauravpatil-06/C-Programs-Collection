#include <stdio.h>
#include <conio.h>

void main()
{
    int i = 100;

    clrscr();

    printf("Even numbers from 100 to 200:\n");
    while (i <= 200)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
        i++;
    }

    getch();
}
