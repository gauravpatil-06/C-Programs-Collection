#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b, c;

    clrscr();

    printf("Enter sides of triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c)
    {
        printf("\nTriangle is an Equilateral triangle");
    }
    else if (a == b || b == c || c == a)
    {
        printf("\nTriangle is an Isosceles triangle");
    }
    else if ((a * a == (b * b + c * c)) || (b * b == (a * a + c * c)) || (c * c == (a * a + b * b)))
    {
        printf("\nTriangle is a Right angled triangle");
    }
    else
    {
        printf("\nTriangle is a Scalene triangle");
    }

    getch();
}