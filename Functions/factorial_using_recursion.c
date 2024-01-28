#include <stdio.h>
#include <conio.h>

int fact(int n);

void main()
{
    int no, f;

    clrscr();

    printf("Enter any number: ");
    scanf("%d", &no);

    f = fact(no);

    printf("\nFactorial = %d", f);

    getch();
}

int fact(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    else
    {
        return (n * fact(n - 1));
    }
}