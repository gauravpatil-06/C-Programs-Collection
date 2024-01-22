#include <stdio.h>
#include <conio.h>

void main()
{
    int a, *ptr;

    clrscr();

    printf("Enter any number: ");
    scanf("%d", &a);

    ptr = &a;

    printf("\nValue of a = %d", a);
    printf("\nAddress of a = %p", (void *)ptr);
    printf("\nValue of a using pointer = %d", *ptr);

    getch();
}