
#include <stdio.h>

// Function to add two unsigned char numbers
unsigned int add(unsigned char num1, unsigned char num2)
{
    return num1 + num2;
}

int main()
{
    unsigned char num1, num2;
    unsigned int result;

    // Ask the user to enter two numbers
    printf("Enter first number (0-255): ");
    scanf("%hhu", &num1);

    printf("Enter second number (0-255): ");
    scanf("%hhu", &num2);

    // Call the addition function
    result = add(num1, num2);

    // Display the result
    printf("Sum = %u\n", result);

    return 0;
}
