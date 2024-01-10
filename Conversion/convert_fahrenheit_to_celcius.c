#include <stdio.h>
#include <conio.h>

void main()
{
    float c, f;

    clrscr();

    printf("\nEnter temperature in Fahrenheit: ");
    scanf("%f", &f);

    c = (f - 32) / 1.8;

    printf("\nTemperature in Celsius = %.2f", c);

    getch();
}