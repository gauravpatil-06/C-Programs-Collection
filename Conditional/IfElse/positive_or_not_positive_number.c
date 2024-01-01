#include <stdio.h>
#include <conio.h>

void main()
{
    int num;

    clrscr();

    printf("Enter any number: ");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("\n%d is a positive number", num);
    }
    else
    {
        printf("\n%d is not a positive number", num);
    }

    getch();
}