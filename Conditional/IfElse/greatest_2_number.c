#include <stdio.h>
#include <conio.h>

void main()
{
    int num1, num2;

    clrscr();

    printf("Enter any two numbers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2)
    {
        printf("\n%d is the greatest number", num1);
    }
    else
    {
        printf("\n%d is the greatest number", num2);
    }

    getch();
}