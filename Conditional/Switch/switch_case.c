#include <stdio.h>
#include <conio.h>

void main()
{
    int option;

    clrscr();

    printf("Enter color code (1-4): ");
    scanf("%d", &option);

    switch (option)
    {
        case 1:
        {
            printf("Yellow");
            break;
        }

        case 2:
        {
            printf("Red");
            break;
        }

        case 3:
        {
            printf("Black");
            break;
        }

        default:
        {
            printf("Invalid Entry");
            break;
        }
    }

    getch();
}