#include <stdio.h>
#include <conio.h>

void main()
{
    int option;

    clrscr();

    printf("Enter day number (1-7): ");
    scanf("%d", &option);

    switch (option)
    {
        case 1:
        {
            printf("Monday");
            break;
        }

        case 2:
        {
            printf("Tuesday");
            break;
        }

        case 3:
        {
            printf("Wednesday");
            break;
        }

        case 4:
        {
            printf("Thursday");
            break;
        }

        case 5:
        {
            printf("Friday");
            break;
        }

        case 6:
        {
            printf("Saturday");
            break;
        }

        case 7:
        {
            printf("Sunday");
            break;
        }

        default:
        {
            printf("Invalid day");
            break;
        }
    }

    getch();
}