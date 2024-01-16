#include <stdio.h>
#include <conio.h>

void main()
{
    int num1, num2, num3;
    float avg;

    clrscr();

    printf("Enter any 3 numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    avg = (float)(num1 + num2 + num3) / 3;

    printf("\nAverage = %.2f", avg);

    getch();
}