#include <stdio.h>
#include <conio.h>

void main()
{
    int i, T, num;

    clrscr();

    printf("Enter any number: ");
    scanf("%d", &num);

    printf("\nTable of %d:\n", num);
    for (i = 1; i <= 10; i++)
    {
        T = i * num;
        printf("%d\n", T);
    }

    getch();
}