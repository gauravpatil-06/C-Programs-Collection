#include <stdio.h>
#include <conio.h>

void main()
{
    int num, i;

    clrscr();

    printf("Enter number of times to print: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        printf("Programming in C\n");
    }

    getch();
}