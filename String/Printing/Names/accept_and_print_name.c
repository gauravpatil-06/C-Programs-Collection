#include <stdio.h>
#include <conio.h>

void main()
{
    char name[20];

    clrscr();

    printf("Enter your name: ");
    scanf("%s", name);

    printf("\nName = %s", name);

    getch();
}