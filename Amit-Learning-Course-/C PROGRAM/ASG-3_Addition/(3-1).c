/*

Requirements:
Implement a program that takes from user two numbers and pass them to a void function called swap.
This function receive the two numbers in two variables x and y and print the two variables then swap their values and Print x and y again after swapping.

*/

#include <stdio.h>

// Function prototype
void swap(int x, int y);

int main()
{
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    swap(num1, num2);

    return 0;
}

// Swap function
void swap(int x, int y)
{
    printf("\n before swapping\n");
    printf("x = %d   y = %d\n", x, y);

    // Swap the values of x and y
    x = x + y;
    y = x - y;
    x = x - y;

    printf("\n after swapping\n");
    printf("x = %d   y = %d\n", x, y);
}
