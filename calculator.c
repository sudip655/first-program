#include <stdio.h>

float calculate(float a, float b, char operation)
{
    switch (operation)
    {
        case '+':
            return a + b;

        case '-':
            return a - b;

        case '*':
            return a * b;

        case '/':
            return a / b;

        default:
            return 0;
    }
}

int main()
{
    float first, second;
    char choice;

    printf("Author Name: Sudip Pandey\n");

    printf("Choose an operator (+, -, *, /): ");
    scanf(" %c", &choice);

    printf("Enter two values: ");
    scanf("%f %f", &first, &second);

    if (choice == '/' && second == 0)
    {
        printf("Error: Cannot divide by zero.\n");
    }
    else
    {
        printf("Answer = %.2f\n", calculate(first, second, choice));
    }

    return 0;
}
