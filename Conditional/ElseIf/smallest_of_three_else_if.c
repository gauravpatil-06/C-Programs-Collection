#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b, c;

    clrscr();

    printf("Enter any three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a < b && a < c)
    {
        printf("\n%d is smaller", a);
    }
    else if (b < a && b < c)
    {
        printf("\n%d is smaller", b);
    }
    else if (c < a && c < b)
    {
        printf("\n%d is smaller", c);
    }
    else
    {
        printf("\nEqual numbers or mixed condition.");
    }

    getch();
}