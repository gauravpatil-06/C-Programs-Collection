#include <stdio.h>
#include <conio.h>

void main()
{
    int flag = 0, num, i = 2;

    clrscr();

    printf("Enter any number: ");
    scanf("%d", &num);

    while (i <= num / 2)
    {
        if (num % i == 0)
        {
            flag = 1;
            break;
        }

        i++;
    }

    if (flag == 0 && num > 1)
    {
        printf("\n%d is a Prime number", num);
    }
    else
    {
        printf("\n%d is not a Prime number", num);
    }

    getch();
}