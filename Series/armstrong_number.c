#include <stdio.h>
#include <conio.h>

void main()
{
    int num, sum = 0, d, ori;

    clrscr();

    printf("Enter any number: ");
    scanf("%d", &num);

    ori = num;

    while (num != 0)
    {
        d = num % 10;
        sum = sum + (d * d * d);
        num = num / 10;
    }

    if (ori == sum)
    {
        printf("\n%d is an Armstrong Number", ori);
    }
    else
    {
        printf("\n%d is not an Armstrong Number", ori);
    }

    getch();
}

