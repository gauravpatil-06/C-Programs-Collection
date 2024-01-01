#include <stdio.h>
#include <conio.h>

void main()
{
    int age;

    clrscr();

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("\nThe person is an adult.");
    }
    else
    {
        printf("\nThe person is a child.");
    }

    getch();
}