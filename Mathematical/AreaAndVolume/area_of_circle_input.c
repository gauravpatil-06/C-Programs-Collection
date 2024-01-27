#include <stdio.h>
#include <conio.h>

void main()
{
    float r, A;

    clrscr();

    printf("Enter the radius of Circle: ");
    scanf("%f", &r);

    A = 3.14 * r * r;

    printf("\nArea of Circle = %.2f", A);

    getch();
}