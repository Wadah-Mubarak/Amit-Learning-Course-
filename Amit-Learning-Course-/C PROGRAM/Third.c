
#include <stdio.h>

int main()
{
    char operator;
    float number1, number2, result;

    // Ask user to enter a mathematical operator
    printf("Enter the operator (+, -, *, /): ");
    scanf(" %c", &operator);

    // Ask user to enter the first number
    printf("Enter Number_1: ");
    scanf("%f", &number1);

    // Ask  user to enter the second number
    printf("Enter Number_2: ");
    scanf("%f", &number2);

    // Perform calculation based on the operator
    switch (operator)
    {
        case '+':cs
            result = number1 + number2;
            printf("The result = %.2f\n", result);
            break;

        case '-':
            result = number1 - number2;
            printf("The result = %.2f\n", result);
            break;

        case '*':
            result = number1 * number2;
            printf("The result = %.2f\n", result);
            break;

        case '/':
            if (number2 != 0)
            {
                result = number1 / number2;
                printf("The result = %.2f\n", result);
            }
            else
            {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;

        default:
            printf("Invalid operator!\n");
    }

    return 0;
}
