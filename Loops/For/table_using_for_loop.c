#include <stdio.h>
#include <conio.h>

void main()
{
    int i, num;

    clrscr();

    printf("Enter any number: ");
    scanf("%d", &num);

    printf("\nTable of %d:\n", num);
    for (i = 1; i <= 10; i++)
    {
        printf("%d\n", (num * i));
    }

    getch();
}