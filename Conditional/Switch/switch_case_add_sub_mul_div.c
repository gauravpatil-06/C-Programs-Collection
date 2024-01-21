#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b, choice;
    float c;

    clrscr();

    printf("Enter any two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\nSelect Operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            c = a + b;
            printf("\nAddition = %.2f", c);
            break;

        case 2:
            c = a - b;
            printf("\nSubtraction = %.2f", c);
            break;

        case 3:
            c = a * b;
            printf("\nMultiplication = %.2f", c);
            break;

        case 4:
            if (b != 0)
            {
                c = (float)a / b;
                printf("\nDivision = %.2f", c);
            }
            else
            {
                printf("\nError: Division by zero is not allowed.");
            }
            break;

        default:
            printf("\nInvalid Choice! Please enter a valid entry.");
    }

    getch();
}