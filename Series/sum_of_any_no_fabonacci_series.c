#include <stdio.h>
#include <conio.h>

/* Note: This program calculates sum of digits, despite the filename */
void main()
{
    int num, sum = 0, d;

    clrscr();

    printf("Enter any number: ");
    scanf("%d", &num);

    while (num != 0)
    {
        d = num % 10;
        sum = sum + d;
        num = num / 10;
    }

    printf("\nSum of digits = %d", sum);

    getch();
}

