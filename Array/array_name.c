#include <stdio.h>
#include <conio.h>

void main()
{
    char a[6] = {'G', 'A', 'U', 'R', 'A', 'V'};
    int i;

    clrscr();

    printf("Array elements are:\n");
    for (i = 0; i <= 5; i++)
    {
        printf("\na[%d] = %c", i, a[i]);
    }

    getch();
}