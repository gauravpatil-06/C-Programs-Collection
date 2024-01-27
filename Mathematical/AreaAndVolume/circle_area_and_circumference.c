#include <stdio.h>
#include <conio.h>

void main()
{
    float radius, pi = 3.14, area, circumference;

    clrscr();

    printf("Enter radius of circle: ");
    scanf("%f", &radius);

    area = pi * radius * radius;
    circumference = 2 * pi * radius;

    printf("\nArea of circle = %.2f", area);
    printf("\nCircumference of circle = %.2f", circumference);

    getch();
}