#include <stdio.h>
#include <conio.h>

void main()
{
    int *p1, *p2, a, b;

    clrscr();

    printf("Enter two values: ");
    scanf("%d %d", &a, &b);

    p1 = &a;
    p2 = &b;

    printf("\nAddition = %d", (*p1 + *p2));
    printf("\nSubtraction = %d", (*p1 - *p2));
    printf("\nMultiplication = %d", (*p1 * *p2));

    if (*p2 != 0)
    {
        printf("\nDivision = %d", (*p1 / *p2));
        printf("\nModulus = %d", (*p1 % *p2));
    }
    else
    {
        printf("\nDivision/Modulus by zero is not possible.");
    }

    getch();
}