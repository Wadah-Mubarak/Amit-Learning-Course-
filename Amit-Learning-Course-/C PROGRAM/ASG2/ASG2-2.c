
#include <stdio.h>
#include <math.h>

int main()
{
    int number, originalNumber, remainder;
    int digits = 0;
    int sum = 0;

    // Ask the user to enter a number
    printf("Enter the number = ");
    scanf("%d", &number);

    // Save the original number
    originalNumber = number;

    // Count the number of digits
    int temp = number;

    while (temp > 0)
    {
        temp = temp / 10;
        digits++;
    }

    // Handle zero as a one-digit number
    if (digits == 0)
        digits = 1;

    // Calculate the sum of digits raised to the power of digits
    temp = number;

    while (temp > 0)
    {
        remainder = temp % 10;
        sum += pow(remainder, digits);
        temp = temp / 10;
    }

    // Check if the number is Armstrong
    if (sum == originalNumber)
    {
        printf("Armstrong number\n");
    }
    else
    {
        printf("Not an Armstrong number\n");
    }

    return 0;
}
