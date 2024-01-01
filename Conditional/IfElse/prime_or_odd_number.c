#include <stdio.h>
#include <conio.h>

void main()
{
    int a;

    clrscr();

    printf("Enter any number: ");
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf("\n%d is an even number", a);
    }
    else
    {
        printf("\n%d is an odd number", a);
    }

    getch();
}