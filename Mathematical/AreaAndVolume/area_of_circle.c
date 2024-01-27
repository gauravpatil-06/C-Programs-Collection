#include <stdio.h>
#include <conio.h>

void main()
{
    float area, radius;

    clrscr();

    printf("Enter the value of radius: ");
    scanf("%f", &radius);

    area = 3.14 * radius * radius;

    printf("\nArea of circle = %f", area);

    getch();
}