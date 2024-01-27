#include <stdio.h>
#include <conio.h>

void main()
{
    float radius, area, circumference;

    clrscr();

    printf("Enter radius: ");
    scanf("%f", &radius);

    area = 3.14 * radius * radius;
    circumference = 2 * 3.14 * radius;

    printf("\nArea of Circle = %f", area);
    printf("\nCircumference of Circle = %f", circumference);

    getch();
}

