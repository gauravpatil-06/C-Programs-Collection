#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b, c;

    clrscr();

    printf("Enter any three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c)
    {
        printf("%d is greater", a);
    }
    else if (b > a && b > c)
    {
        printf("%d is greater", b);
    }
    else if (c > a && c > b)
    {
        printf("%d is greater", c);
    }
    else
    {
        printf("Equal numbers or mixed condition.");
    }

    getch();
}