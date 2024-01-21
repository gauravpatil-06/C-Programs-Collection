#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b, c;

    clrscr();

    printf("Enter any three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a < b)
    {
        if (a < c)
        {
            printf("\n%d is the smallest number", a);
        }
        else
        {
            printf("\n%d is the smallest number", c);
        }
    }
    else
    {
        if (b < c)
        {
            printf("\n%d is the smallest number", b);
        }
        else
        {
            printf("\n%d is the smallest number", c);
        }
    }

    getch();
}