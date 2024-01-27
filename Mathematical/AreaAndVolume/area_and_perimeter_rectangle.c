#include <stdio.h>
#include <conio.h>

void main()
{
    float length, breadth, area, perimeter;

    clrscr();

    printf("Enter length and breadth of rectangle: ");
    scanf("%f %f", &length, &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("\nArea of rectangle = %.2f", area);
    printf("\nPerimeter of rectangle = %.2f", perimeter);

    getch();
}