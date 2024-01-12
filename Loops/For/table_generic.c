#include <stdio.h>
#include <conio.h>

void main()
{
    int num, i = 1;

    clrscr();

    printf("Enter any number: ");
    scanf("%d", &num);

    printf("\nTable of %d:\n", num);
    while (i <= 10)
    {
        printf("%d * %d = %d\n", num, i, (num * i));
        i++;
    }

    getch();
}