#include <stdio.h>
#include <conio.h>

void main()
{
    int fact = 1, i, num;

    clrscr();

    printf("Enter any number: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        fact = fact * i;
    }

    printf("\nFactorial of number = %d", fact);

    getch();
}