#include <stdio.h>
#include <conio.h>

void diameter(float r)
{
    printf("Diameter of circle = %.2f\n", (2 * r));
}

void circumference(float r)
{
    printf("Circumference of circle = %.2f\n", (2 * 3.14 * r));
}

void area(float r)
{
    printf("Area of circle = %.2f\n", (3.14 * r * r));
}

void main()
{
    float r;

    clrscr();

    printf("Enter the radius: ");
    scanf("%f", &r);

    diameter(r);
    circumference(r);
    area(r);

    getch();
}