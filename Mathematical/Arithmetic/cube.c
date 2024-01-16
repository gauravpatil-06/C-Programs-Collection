#include <stdio.h>
#include <conio.h>

void main()
{
    int a, cube;

    clrscr();

    printf("Enter any number: ");
    scanf("%d", &a);

    cube = a * a * a;

    printf("\nCube = %d", cube);

    getch();
}