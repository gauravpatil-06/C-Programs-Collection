#include <stdio.h>
#include <conio.h>

void main()
{
    int num, count = 0, d;

    clrscr();

    printf("Enter any number: ");
    scanf("%d", &num);

    while (num != 0)
    {
        d = num % 10;
        count++;
        num = num / 10;
    }

    printf("\nNumber of digits = %d", count);

    getch();
}

