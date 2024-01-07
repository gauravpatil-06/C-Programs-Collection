#include <stdio.h>
#include <conio.h>

void main()
{
    int num, d, sum = 0;

    clrscr();

    printf("Enter any number: ");
    scanf("%d", &num);

    while (num != 0)
    {
        d = num % 10;
        sum = sum + d;
        num = num / 10;
    }

    printf("\nSum of all digits = %d", sum);

    getch();
}