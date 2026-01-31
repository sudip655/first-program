#include<stdio.h>

int main()
{
    float num1, num2, result;
    char op;

    printf("Enter an operatorr (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    switch(op)
    {
        case '+':
            result = num1 + num2;
            printf("Result = %.2f\n", result);
            break;

        case '-':
            result = num1 - num2;
            printf("Result = %.2f\n", result);
            break;

        case '*':
            result = num1 * num2;
            printf("Result = %.2f\n", result);
            break;

        case '/':
            if(num2 != 0)
            {
                result = num1 / num2;
                printf("Result = %.2f\n", result);
            }
            else
            {
                printf("Division by zero is not allowed\n");
            }
            break;

        default:
            printf("Enter a valid operator\n");
    }

    return 0;
}

