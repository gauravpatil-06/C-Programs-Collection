#include <stdio.h>
#include <conio.h>

void main()
{
    int i = 1;

    clrscr();

    while (i <= 10)
    {
        if (i == 5)
        {
            goto out;
        }
        else
        {
            printf("%d\n", i);
            i++;
        }
    }

out:
    printf("\nYou are at the end of the program.");

    getch();
}

