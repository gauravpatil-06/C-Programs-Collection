#include <stdio.h>
#include <conio.h>

void main()
{
    int i = 1, num, fact = 1;

    clrscr();

    printf("Enter any number: ");
    scanf("%d", &num);

    while (i <= num)
    {
        fact = fact * i;
        i++;
    }

    printf("\nFactorial of %d = %d", num, fact);

    getch();
}