#include <stdio.h>
#include <conio.h>

void main()
{
    char ch;

    clrscr();

    printf("Enter any character: ");
    scanf("%c", &ch);

    printf("\nASCII code = %d", ch);

    getch();
}