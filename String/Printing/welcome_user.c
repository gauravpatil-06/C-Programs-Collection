#include <stdio.h>
#include <conio.h>

void main()
{
    char name[20];

    clrscr();

    printf("Enter your name: ");
    scanf("%s", name);

    printf("\nHello %s, welcome to our home!", name);

    getch();
}