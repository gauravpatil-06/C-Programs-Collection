#include <stdio.h>
#include <conio.h>

void main()
{
    float c, f;

    clrscr();

    printf("Enter temperature in degree Fahrenheit: ");
    scanf("%f", &f);

    c = (f - 32) / 1.8;

    printf("\nTemperature in degree Celsius = %.2f", c);

    getch();
}