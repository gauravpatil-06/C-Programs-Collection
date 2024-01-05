#include <stdio.h>
#include <conio.h>

void main()
{
    int i = 1, num, sum = 0;

    clrscr();

    printf("Enter a number: ");
    scanf("%d", &num);

    while (i <= num)
    {
        sum = sum + i;
        i++;
    }

    printf("\nSum of numbers from 1 to %d = %d", num, sum);

    getch();
}