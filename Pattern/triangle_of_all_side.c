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
        printf("\nThe given triangle is Equilateral");
    }
    else if (a == b || b == c || c == a)
    {
        printf("\nThe given triangle is Isosceles");
    }
    else if ((a * a == (b * b + c * c)) || (b * b == (a * a + c * c)) || (c * c == (a * a + b * b)))
    {
        printf("\nThe given triangle is a Right Angled Triangle");
    }
    else
    {
        printf("\nThe given triangle is Scalene");
    }

    getch();
}