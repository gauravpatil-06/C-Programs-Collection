#include <stdio.h>
#include <conio.h>

void main()
{
    int num, reverse = 0, d;

    clrscr();

    printf("Enter any number: ");
    scanf("%d", &num);

    while (num != 0)
    {
        d = num % 10;
        reverse = (reverse * 10) + d;
        num = num / 10;
    }

    printf("\nReverse number = %d", reverse);

    getch();
}

