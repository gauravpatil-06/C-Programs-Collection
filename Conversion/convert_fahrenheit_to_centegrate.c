#include <stdio.h>
#include <conio.h>

void main()
{
    float f, c;

    clrscr();

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);

    c = (f - 32) / 1.8;

    printf("\nFahrenheit to Centigrade = %.2f", c);

    getch();
}