#include <stdio.h>
#include <conio.h>

void main()
{
    float fah, celsius;

    clrscr();

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fah);

    celsius = (fah - 32) * 5 / 9;

    printf("\nCelsius = %.2f", celsius);

    getch();
}