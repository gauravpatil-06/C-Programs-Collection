#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b, c, d, e, total;
    float avg;

    clrscr();

    printf("Enter marks of 5 subjects: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    total = a + b + c + d + e;
    avg = (float)total / 5;

    printf("\nTotal Marks = %d", total);
    printf("\nAverage Marks = %.2f", avg);

    getch();
}