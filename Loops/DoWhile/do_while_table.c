#include <stdio.h>
#include <conio.h>

void main()
{
    int i = 1, num, table;

    clrscr();

    printf("Enter any number: ");
    scanf("%d", &num);

    do
    {
        table = num * i;
        printf("\n%d", table);
        i++;
    }
    while (i <= 10);

    getch();
}