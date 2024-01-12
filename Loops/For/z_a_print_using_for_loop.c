#include <stdio.h>
#include <conio.h>

void main()
{
    char i;

    clrscr();

    printf("Characters from 'z' to 'a':\n");
    for (i = 'z'; i >= 'a'; i--)
    {
        printf("%c ", i);
    }

    getch();
}