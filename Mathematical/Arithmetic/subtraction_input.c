#include <stdio.h>
#include <conio.h>

void main()
{
    int num1, num2, subtraction;

    clrscr();

    printf("Enter any two numbers: ");
    scanf("%d %d", &num1, &num2);

    subtraction = num1 - num2;

    printf("\nSubtraction = %d", subtraction);

    getch();
}