#include <stdio.h>
#include <conio.h>

void main()
{
    int i = 1, num, f1 = 0, f2 = 1, f3 = 0;

    clrscr();

    printf("Enter the number of terms: ");
    scanf("%d", &num);

    printf("\nFibonacci Series:\n");
    printf("%d\t", f1); // Standard Fibonacci starts with f1

    while (i <= num - 1)
    {
        f3 = f1 + f2;
        printf("%d\t", f3);
        f1 = f2;
        f2 = f3;
        i++;
    }

    getch();
}