#include <stdio.h>
#include <conio.h>

void main()
{
    int m1, m2, m3, m4, m5, total;
    float avg;

    clrscr();

    printf("Enter marks of 5 subjects: ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    total = m1 + m2 + m3 + m4 + m5;
    avg = (float)total / 5;

    printf("\nTotal = %d", total);
    printf("\nAverage = %.2f", avg);

    getch();
}