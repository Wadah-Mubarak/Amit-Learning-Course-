
#include <stdio.h>

// Function to divide two numbers
float divide(float x, float y)
{
    if (y == 0)
    {
        printf("Error: Cannot divide by zero!\n");
        return 0;
    }

    return x / y;
}

int main()
{
    float x, y, result;

    // Get two numbers from the user
    printf("Enter first number (x): ");
    scanf("%f", &x);

    printf("Enter second number (y): ");
    scanf("%f", &y);

    // Call the division function
    if (y != 0)
    {
        result = divide(x, y);
        printf("Result = %.2f\n", result);
    }
    else
    {
        divide(x, y);
    }

    return 0;
}