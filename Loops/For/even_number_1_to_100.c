#include <stdio.h>
#include <conio.h>

void main()
{
    int i;

    clrscr();

    printf("Even numbers from 1 to 100:\n");
    for (i = 2; i <= 100; i = i + 2)
    {
        printf("%d\n", i);
    }

    getch();
}