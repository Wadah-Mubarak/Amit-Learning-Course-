/*
Requirements:
Write a program to Display Fibonacci Sequence Using the Recursion Method and iterative Method

*/

#include <stdio.h>

// Function prototypes
int fib(int n);
void iterative(int n);

int main()
{
    int n, i;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Invalid number of terms.");
        return 0;
    }

    // Recursion Method
    printf("\nFibonacci Series (Recursion): ");

    for (i = 0; i < n; i++)
    {
        printf("%d ", fib(i));
    }

    // Iterative Method
    printf("\nFibonacci Series (Iterative): ");
    iterative(n);

    return 0;
}

// Recursive function
int fib(int n)
{
    if (n <= 1)
        return n;

    return fib(n - 1) + fib(n - 2);
}

// Iterative function
void iterative(int n)
{
    int a = 0, b = 1, c, i;

    for (i = 0; i < n; i++)
    {
        printf("%d ", a);

        c = a + b;
        a = b;
        b = c;
    }
}

