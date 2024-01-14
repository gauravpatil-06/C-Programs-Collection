#include <stdio.h>
#include <conio.h>

void main()
{
    int a[10], sum = 0, i;
    int *ptr;

    clrscr();

    printf("Enter 10 array elements:\n");
    for (i = 0; i < 10; i++)
    {
        printf("Element %d: ", i);
        scanf("%d", &a[i]);
    }

    ptr = &a[0];
    for (i = 0; i < 10; i++)
    {
        sum = sum + *ptr;
        ptr++;
    }

    printf("\nSum of all elements = %d", sum);

    getch();
}