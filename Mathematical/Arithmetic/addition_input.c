#include <stdio.h>
#include <conio.h>

void main()
{
    int num1, num2, sum;

    clrscr();

    printf("Enter any two numbers: ");
    scanf("%d %d", &num1, &num2);

    sum = num1 + num2;

    printf("\nAddition = %d", sum);

    getch();
}